## React.Component

####  `React.Component`란? 리액트로 만들어진 앱(웹)을 이루는 최소한의 단위이다.

+ #### 장점 : MVC의 뷰를 독립적으로 구성하여 재사용을 할 수 있고, 이를 통하여<br>새로운 컴포넌트를 쉽게 만들 수 있다.
+ #### 단점 : MVC방식으로 분리하여 관리하여 각 요소의 의존성이 높아 재활용이 어렵다.


        1. 컴포넌트는 데이터(props)를 입력받아 View(state) 상태에 따라서 DOM Node를 출력하는 함수.

        2. 컴포넌트 이름은 항상! 대문자로 시작하도록 함.
            -> React는 소문자로 시작하는 컴포넌트를 DOM 태그로 취급하기 때문임.
        3. UI를 재사용 가능한 개별적인 여러 조각으로 나누고, 각 조각을 개별적으로 나누어 코딩함.


### 컴포넌트 렌더링

+ #####  DOM 태그만을 사용해 React 엘리먼트를 나타냄 (아래와 같음)

```js
const element = <div />;
```

+ #####  React 엘리먼트는 사용자 정의 컴포넌트로도 나타냄 (아래와 같음)

```js
const element = <Welcome name="Taerang" />;
```


#### React가 사용자 정의 컴포넌트로 작성한 엘리먼트를 발견하면 JSX 어트리뷰트와<br> 자식을 해당 컴포넌트에 단일 객체로 전달합니다. 이 객체를 “props”라고 합니다.

+ #### "Hello, Taerang"을 렌더링하는 예시 (아래와 같음)

```js
function Welcome(props) {
  return <h1>Hello, {props.name}</h1>;
}

const root = ReactDOM.createRoot(document.getElementById('root'));
const element = <Welcome name="Taerang" />;
root.render(element);
```
    1. <Welcome name="Sara" /> 엘리먼트로 root.render()를 호출함.
    2. React는 {name: 'Sara'}를 props로 하여 Welcome 컴포넌트를 호출함.
    3. Welcome 컴포넌트는 결과적으로 <h1>Hello, Sara</h1> 엘리먼트를 반환함
    4. React DOM은 <h1>Hello, Taerang</h1> 엘리먼트와 일치하도록 DOM을 효율적으로 업데이트함.
