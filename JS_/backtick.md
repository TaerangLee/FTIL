## backtick(`)

#### `백틱`이란? 키보드 탭 위, 1의 왼쪽 '~'(물결표) 쯤에 있는 '와 비슷하게 생긴 문자이다.<br>백팅(`)을 사용하면 ${}를 사용해서 문자열과 변수를 적절히 같이 사용할 수 있다.
<br>

```js
const num1 = 10;
const num2 = 20;

console.log(num1 + "+" + num2 + "=" + num1 + num2);
```

#### 백틱 사용 ES2015 CODE

```js
const num1 = 10;
const num2 = 20;

console.log(`${num1} + ${num2} = ${num1+num2}`);

//문자열 사이에 변수만 따로 구분할 수 있게 해서 더 직관적으로 볼수 있다.
```


+ 관련 사이트 :  https://leeborn.tistory.com/entry/JavaScript-ES2015-%EB%B0%B1%ED%8B%B1%EA%B3%BC-%ED%85%9C%ED%94%8C%EB%A6%BF-%EB%AC%B8%EC%9E%90%EC%97%B4