## toggle() 사용법

`toggle`이란, on/off switch의 개념으로 스위치를 켰다, 껏다 하는 기능을
가지고 있다. add()와 remove() 메서드를 쓸 수 있는 합쳐진 개념이다.

#### 보통 click event에 classList를 이용하여 toggle로 css로 style을 <br>준 클래스명을 on/off를 한다.
<br>

+ #### add()와 remove()를 사용한 코드

```js
const test = document.querySelector(".test");

function testfunc(){
    const C1 = "clicked";
    if(test.classList.contains(C1)){
        test.classList.remove(C1);
    }else{
        test.classList.add(C1);
    }   
}

test.addEventListener("click", testfunc);
```


+ #### toggle()을 사용한 코드

```js

const test = document.querySelector(".test");

function testfunc(){
    test.classList.toggle("clicked");
}

test.addEventListener("click", testfunc);
```
