## [@types/React]@emotion/styled로 Theme 만들기

### 1. @emotion 설치와 tsconfig.json / .babelrc 설정

```git
npm i @babel/preset-react @emotion/babel-plugin @emotion/core @emotion/react @emotion/styled
```

#### tsconfig.json 설정

```json
"compilerOptions": {
...
    "jsx": "react-jsx",
    "jsxImportSource": "@emotion/react",
...
},

//jsxImportSource를 저렇게 설정을 해야 나중에 styled-component에서 props의 타입이 알맞게 들어간다.
```

#### 디렉토리의 상단에 `.babelrc` 설정

```
{
  "plugins": ["@emotions"]
  //만약 다른 babel plugin 설치한 경우는 "plugin": ["@emotions", ..otherBabelProps] 나열해서 써주세요.
}
```

### 2. Theme.ts와 Theme.d.ts 생성

```ts
//emotion/styled를 처리하다가 이런데에서 오류가 나는 일들이 종종 있다.

background-color: ${({ theme }) => theme.color.bgGrey20 };
// TS2339: Property 'colors' does not exist on type 'Theme'.
```

    회사다닐땐 이거 때문에 하나 둘씩 globalStyle로 옮겨가다가 이제 더 이상 theme을 안쓰곤 했다.
    이 원인 중 하나가 typescript에서 저희가 정의한 Theme의 type을 해독하지 못해서라고 한다.
    결론적으로는 같은 이름의 declare file을 만들어줘서 해결이 가능하는 것이다.

```tsx
//theme.tsx

import { Theme } from "@emotion/react";

const theme: Theme = {
  fontSizes: {
    xs: "12px",
    sm: "16px",
    base: "24px",
    md: "36px",
    lg: "48px",
    xl: "64px",
    xxl: "96px",
    xxxl: "128px",
  },
  colors: {
    black: "#12101D",
    white: "#FFFFFF",
    primary: "#B672FD",
    secondary: "#E7266C",
  },
};

export default theme;
```

```tsx
//theme.d.ts

import "@emotion/react";

declare module "@emotion/react" {
  export interface Theme {
    fontSizes: {
      xs: string;
      sm: string;
      base: string;
      md: string;
      lg: string;
      xl: string;
      xxl: string;
      xxxl: string;
    };
    colors: {
      black: string;
      white: string;
      primary: string;
      secondary: string;
    };
  }
}
```

##### 하지만 Theme은 잘 들어오지만 Typescript compiler가 type을 감지하지 못하는 버그가 발생한다. ➡️ (해결) 두 파일 합치기!!

```tsx

```

### 3. index.tsx에서 Theme 설정

```tsx
import React from "react";
import ReactDOM from "react-dom/client";
import "./index.css";
import App from "./App";
import reportWebVitals from "./reportWebVitals";
import theme from "./style/theme";
import { ThemeProvider } from "@emotion/react";

const root = ReactDOM.createRoot(
  document.getElementById("root") as HTMLElement
);
root.render(
  <React.StrictMode>
    <ThemeProvider theme={theme}>
      <App />
    </ThemeProvider>
  </React.StrictMode>
);

reportWebVitals();

//src 폴더에서 정의해주는 하위 컴포넌트 style.tsx에서 가져와서 사용할 수 있다.
```

##### 이런 식으로⬇️

```tsx
import styled from "@emotion/styled";

export const WallpaperLayout = styled.div`
  color: ${({ theme }) => theme.colors.black};
`;
```

#### 발생하는 문제점

    위와 같이 코드를 작성을 할 경우에는 하나로 일괄 적용이 된다.
    이 Theme가 가장 많이 사용이 되는 것이 다크/일반 모드 등으로 나뉜다.

    이의 해결방법으로는

- ##### os 세팅을 보고 테마를 가져온다.
- ##### (서버에서 정보를 내려준다면) redux나 swr같은 전역 저장소로 유저가 고른 걸 가져온다.
- ##### (사용자가 UI로 직접 설정을 변경해준다면) hooks를 직접 만들어준다.
