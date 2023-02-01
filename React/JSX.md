## JSX

```js
const element = <h1>Hello, world!</h1>;
```

+ ##### 위의 태그 문법은 문자열도 html도 아닌 JSX라고 한다.

#### `JSX`란 React에서는 본질적으로 렌더링 조직이 UI 로직(이벤트가 처리되는 방식, <br>시간에 따라 state가 변하는 방식, 화면에 표시하기 위해 데이터가 준비되는 방식 등)<br>과 연결된다는 사실을 받아들인다.

#

#### React는 JSX 사용이 필수가 아니지만, 대부분의 사람은 JavaScript 코드 안에서<br>UI 관련 작업을 할 때 시각적으로 더 도움이 된다고 생각합니다. 또한 React가 더욱<br>도움이 되는 에러 및 경고 메시지를 표시할 수 있게 해줍니다.


### JSX 표현식 포함하기

    아래 예시에서는 name이라는 변수를 선언한 후 중괄호로 감싸 JSX 안에 사용하였습니다.

```js
const name = 'Josh Perez';
const element = <h1>Hello, {name}</h1>;
```


### React.Js 연결 script

```html
<script src="https://unpkg.com/react@17.0.2/umd/react.production.min.js"></script>
<script src="https://unpkg.com/react-dom@17.0.2/umd/react-dom.production.min.js"></script>
<script src="https://unpkg.com/@babel/standalone/babel.min.js"></script> 
```

+ ####  babel이란? JS 컴파일러 즉 JS로 결과물을 만들어주는 컴파일러.<br>
