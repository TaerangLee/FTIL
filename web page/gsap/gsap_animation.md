## gsap_animation

#### `gsap.play(), .pause(), resume(), reverse(), restart()` <br>애니메이션을 멈추거나 재실행하는 등의 핸들링도 가능하다.


```js
let tween = gsap.to(".box1", { //박스 하나를 먼저 생성
    duration: 8, 
    x: 400, 
    width: 400, 
    paused: true, //움직임을 고정시킴
});

document.querySelector("#play").onclick = function() 
{ return tween.play(); } //실행
document.querySelector("#pause").onclick = function() 
{ return tween.pause(); } //정지
document.querySelector("#resume").onclick = function() 
{ return tween.resume(); } //재개
document.querySelector("#reverse").onclick = function() 
{ return tween.reverse(); } //반전
document.querySelector("#restart").onclick = function() 
{ return tween.restart(); } //재시작
```

