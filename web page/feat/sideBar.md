## sideBar 구현 하기

### `sideBar`는 옆에서 메뉴 표현식으로 나타낼 수 있다. gsap을 이용함.

+ ### HTML
```html
  <div class="nav"></div> //nav 라는 sideBar를 생성한다. 
  ```

 + ### CSS
```css
  .nav { 
  height: 100%;
  background-color: black;
  opacity: 60%;
  width: 300px;
  position: absolute; //가장 중요한 absolute를 지정한다.
  translate: -300px;
  /* color: white; */
  z-index: 1;
}
```

+ ### JS
```js
const barLogo = document.querySelector(".barLogo"); //누르면 sideBar가 나오고 들어오고
const body = document.querySelector("body"); //sideBar가 나오고 나서 background를 지정
let toggle = true; //true 값을 지정 let인 이유는 false일 경우.

barLogo.addEventListener("click", () => {
  console.log("!23");
  if (toggle) {
    gsap.to(".nav", { duration: 0.3, x: 300, ease: "bounce" });
    toggle = !toggle;
    body.classList.add("background");
  } else {
    gsap.to(".nav", { duration: 0.3, x: 0, ease: "bounce" });
    toggle = !toggle;
    body.classList.remove("background");
  }
});
```
