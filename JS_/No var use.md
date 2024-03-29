## javascript에서 var 사용을 안 하는 이유

`var`는 ES6 등장 이전에 사용이 되던 키워드이다. 변수 앞에서 생성할 때
앞에 붙여서 변수임을 명시를 한다.

```js
var a = 123;
console.log(a); //123

var a = 567
console.log(a); //567
```
    a가 2번 선언이 되었음에도 불구하고, 오류는 발생하지 않음.

    방대한 프로젝트를 개발한다면 똑같은 이름의 변수를 몇 번이나 사용을 하여도 
    오류는 발생을 하지 않는다. 그리하여 로직 상의 오류는 빈번해진다..
    또 그 오류를 발견하기를 또 굉장히 어렵게 될 것이다.

 이러한 현상의 이유는 바로 `Hosting(호이스팅)` 때문이다.

 ### Hosting이란?
`var`

    키워드를 사용하여 변수 선언 시, 해당 변수의 선언부를 스코프 
    최상단으로 올려버리는 것이다. Javascript의 변수 생성과 초기화의 작업이 
    분리되어 진행되기 때문에 이러한 현상이 발생을 한다.  

<br><br>


```js
var a = 123;
function func(){
    console.log(a); //undefined
    var a = 456;
    console.log(a); //456
}
func();
```
이 위에 코드는 var의 Hosting에 의해 아래와 같이 인식이 됨.

```js
var a = 123;
function func(){
    var a;
    console.log(a);  //undefined
    a = 456;
    console.log(a); //456
}
func();
```

`Hosting` 때문에 a를 참조할 Reference Error는 나지 않고, 

대신 `undefined`라는 값이 출력이 된다.

