## arraw function

##### 함수 표현식보다 단순하고 간결한 문법으로 함수를 만들 수 있는 방법이 있음.

##### 화살표 함수(arrow function)를 사용하는 것이다. 다음과 같이 사용

```js
    let func = (arg1, arg2, arg3 ..argN) => expression
```

##### 이렇게 코드를 작성하면 인자 `arg1..argN`를 받는 함수 func이 만들어진다.
##### 함수 func는 화살표(`=>`) 우측의 `표현식(expression)`을 평가 하고, 평가 결과 반환한다.
<br><br>

+ 더 나은 예시

```js
const plus = (a, b) =>{
    return a+b; //variable 값으로 a, b를 받은 후에 호출한 곳에 return.
}

alert(plus(3,4)); //alert로 알림을 울림.

```
<br>

+ 인수가 하나밖에 없다면 인수를 감싸는 괄호를 생략할 수 있다. (코드 길이 줄이기)

```js
const double = n => n * 2;

alert(double(3));
```

<br>

+ 인수가 하나도 없을 때 괄호를 비워둔다. 하지만 괄호를 무조건 쓴다.

```js
const sayHello = () => alert("Hello!");

sayHello();
```
<br>

+ 아래와 같이 함수를 동적으로 만들 수도 있다.

```js
const age = prompt("나이를 알려주세요.", 18);

const welcome = (age < 18) ?
  () => alert('안녕') :
  () => alert("안녕하세요!");

welcome();
```




