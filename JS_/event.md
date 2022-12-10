# JS addEventListener


### handleTitleClick이라는 함수를 생성하고 event 중 click을 addEventListener을 <br>통해서 함수가 실행이 된다.

```js
function handleTitleClick(){
    console.log("title was cliked!");
}

title.addEventListener("click", handleTitleClick); //click을 했을 때 함수 실행 
(여기서 title은 위에서 한번 지정함)

//ex)const title = document.querySelector(".hello");
// title은 html 문서 안에서 querySelector hello라는 class or div에서 사용
```
<br>


### handleMouseEnter라는 함수를 생성하고 event 중 마우스를 올려다 대면 addEventListener을 <br>통해서 함수가 실행이 된다.

```js
function handleMouseEnter(){
    console.log("mouse is here!");
}
title.addEventListener("mouseenter", handleMouseEnter); //마우스가 조건 위에 올려져 있으면 실행.
```
<br>

### handleMouseleave라는 함수를 생성하고 event 중 마우스가 조건에 벗어나면 addEventListener을 <br>통해서 함수가 실행이 된다.

```js
function handleMouseLeave(){
    console.log("mouse is out");
}

title.addEventListener("mouseleave", handleMouseLeave);
```
<br>

### handleWindowResize라는 함수를 생성하고 event 중 윈도운 창의 재정의 하면 addEventListener을 <br>통해서 함수가 실행이 된다.

```js
function handleWindowResize(){
    console.log("window resize.");
    document.body.style.backgroundColor = "white"; //html 문서의 body의 바탕 색깔을 흰색으로 변경.
}

window.addEventListener("resize", handleWindowResize);
```

<br>

### handleWindowCopy/Paste라는 함수를 생성하고 event 중 윈도운 ctrl + c / ctrl +v addEventListener을 <br>통해서 실행이 된다.


```js
function handleWindowCopy(){
    alert("No Copy!");
}
function handleWindowpaste(){
    alert("No Paste!");
}

window.addEventListener("copy", handleWindowCopy); //ctrl + c 또는 command + c를 누르면 함수가 실행이 된다.
window.addEventListener("paste", handleWindowpaste); //ctrl + v 또는 command + v를 누르면 함수가 실행이 된다.
```

+ 함수를 이용하여서 쓸 수 있지만 바로 event줄에서 실행을 시킬 수 있다.

```js
window.addEventListener("copy", () => {
    console.log("No Copy!"); 
    //arrow를 이용한 방법이다. 자세한 건 TIL Js_-arrow function 참조
})
```
<br>


### handleWindowOnline/Offline라는 함수를 생성하고 wifi가 끊어지면 online wifi가 연결이 되면 Online을 addEventListener을 <br>통해서 실행이 된다.


```js

function handleWindowOnline(){
    alert("Wifi is running"); //wifi 연결
}
function handleWindowOffline(){
    alert("Wifi disconnected"); //wifi 비연결
}
    
window.addEventListener("offline", handleWindowOffline); 
//wifi가 연결이 끊어졌을 때 이 함수가 실행이 된다.
window.addEventListener("online",handleWindowOnline); 
//wifi가 연결이 되었을 때 이 함수가 실행이 된다.
```





