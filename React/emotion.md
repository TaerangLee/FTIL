## Emotion으로 React 컴포넌트 스타일하기


    Emotion이 css() 함수는 위에서 설치한 @emotion/react 패키지에서 불러올 수 있다.
    css() 함수는 CSS 스타일 선언 내용을 인자로 받는데 객체형으로 넘겨도 되고, 
    문자형으로 넘겨도 된다.. 그리고 css() 함수가 반환 결과를 해당 스타일을 적용하고 싶은 
    HTML 요소나 React 컴포넌트의 css라는 prop에 넘겨주면 된다.

```js
/** @jsxImportSource @emotion/react */
import { css } from "@emotion/react";

function MyComponent() {
  return (
    <div
      css={css({
        backgroundColor: "yellow",
      })}
    >
      노란색 영역
    </div>
  );
}
```


#### 문자형 스타일은 `css()`함수의 인자로 넘기면 아래와 같은 모습이다.
```js
/** @jsxImportSource @emotion/react */
import { css } from "@emotion/react";

function MyComponent() {
  return (
    <div
      css={css`
        background-color: yellow;
      `}
    >
      노란색 영역
    </div>
  );
}
```