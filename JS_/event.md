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

window.addEventListener("copy", handleWindowCopy); //ctrl + c 또는 command + c를 누르면 함수가 실행이 된다
window.addEventListener("paste", handleWindowpaste); //ctrl + v 또는 command + v를 누르면 함수가 실행이 된다.
```
