## setInterval and setTimeout 


### `setTimeout`은 어떤 코드를 바로 실행하지 않고 일정 시간을 기다린 후에<br>실행을 할 경우에 JS 안에서 setTime()함수를 사용할 수 있습니다.

```js
setTimeout(() = >console.log("2초 후에 실행됨"), 2000);
//2초 뒤에 실행이 됨
```

    
#### setTimeout()함수는 세번째 인자부터는 가변 인자를 받는데, <br> 첫번째 인자로 넘어온 함수가 인자를 받는 경우, 이 함수에 넘길 인자를 명시해주기 위해서 사용한다.

    Ex) 두 개의 수를 인자로 받아서 더한 값을 출력하는 add()라는 함수에
    인자로 3 4 를 넘겨 기다린 후에 실행!



```js
function add(x, y) {
  console.log(x + y);
}
setTimeout(add, 2000, 3, 4);
```



### `setinterval`은 어떤 코드를 일정한 시간 간격을 두고 반복해서<br>실행하고 싶을 때 사용한다.

```js
setInterval(() => console.log(new Date()), 2000);
```













