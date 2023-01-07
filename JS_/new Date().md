## new Date()

+ 시간을 나타내는 Code.

```js

const clock = document.querySelector(".clock");

function getClock(){

    const date = new Date(); //시간이나 날짜를 사용할 경우에 사용하는 Date()이다.
    const hours = String(date.getHours()).padStart(2, "0");
    const minutes = String(date.getMinutes()).padStart(2, "0");
    const seconds = String(date.getSeconds()).padStart(2, "0");

    //시 분 초를 문자열로 바꿔준 다음에 최소 2글자인데 아닐 경우에는 앞에서 부터 0으로 채움.
    
    //clock.innerText = (`${date.getHours()}:${date.getMinutes()}:${date.getSeconds()}`);
    clock.innerText = `${hours}시 ${minutes}분 ${seconds}초`
}


getClock(); //먼저 한번 시간을 나타낸 후에 아래 함수를 실행시킴.
setInterval(getClock, 1000); //함수를 1초에 한번씩 실행을 하도록 함.

//setInterval(sayHello, 1000); //5초마다 함수를 실행시킨다.

//setTimeout(sayHello, 2000); // 2초 뒤에 함수를 실행시킨다.
```
