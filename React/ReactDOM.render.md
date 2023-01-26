## ReactDOM.render

#### `ReactDOM.render()` 함수를 통해 WEB API를 사용하여 웹 브라우저<br>에 그려주는 함수이다. (React.createElement)를 통하여 Object를 생성하고 <br> 이를 In-Memory에 저장한다. Root DOM Node에 랜더링 하기 위해서 이를 사용한다.

```js 
//(nomadcoders - react.js 중)

const span = React.createElement("span"); //span 태그를 생성할 코드
const root = document.getElementById("root");  //root라는 div 변수 선언 
ReactDOM.render(span, root); 
//span을 root안에 render하라고 부탁을 하는 것   
```


