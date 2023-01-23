# React의 개념 정리

![React](https://media.discordapp.net/attachments/956190154454876183/1065594221286932480/9k.png)

### `React`란? UI를 만들기 위해서 페이스북에서 <br>개발한 js 기반의 프론트 라이브러리.

#

### `React`의 특징

- #### 이전 UI상태를 메모리에 유지해서, 변경될 UI의 최소 집합을 계산하는 기술인<br>virtualdom이 리액트의 구현의 핵심이다.

- #### 하나의 페이지를 불러오는 것이 불가능하여 React의 router 기능을 사용하여<br> 다른 경로에 따라 다른 view를 보여줄 수 있게 해주어 단점을 보완한다.


        4가지의 React 특징!

        1. React는 선언형이다.
        2. React는 컴포넌트 기반으로 재사용성이 뛰어나다.
        3. React는 Virtual DOM(가상돔)기반으로 가볍다.
        4. React는 state와 props을 가진다.
        





### JSX

 + #### 리액트 Fragment : <></>, 브라우저 상에 실제 엘리먼트로 나타나지 않음. <br>리액트 컴포넌트는 반드시 하나의 태그로 감싸져 있어야 하는데, 단순히 감싸기 위한 목적으로 <br>불필요한 div를 사용하는 대신 Fragment를 사용할 수 있다.

+ #### 인라인 스타일은 객체 형태로 작성해야 하며, 스타일 속성 이름은 <br>카멜케이스(background-color -> backgroundColor)로 작성해야 한다.

```js
const style = {
    backgroundColor: 'black',
    fontSize: 24
  }

 <div style={style}>{name}</div> 
 ```

 + #### css class는 `className`으로 작성함.
 

 + #### JSX 내부 주석은  `{/* 이 안에 */}` 작성. (중괄호로 감싸야 함)
 
 + #### 태그 안에서는 `//`주석 사용이 가능하다. (`<Hello //주석/>`)
