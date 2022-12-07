## click event 


#### handleTitleClick이라는 함수를 생성하고 event 중 click을 addEventListener을 <br>통해서 사용한다

```js
function handleTitleClick(){
    console.log("title was cliked!");
}

title.addEventListener("click", handleTitleClick); //click을 했을 때 함수 실행 
(여기서 title은 위에서 한번 지정함)

//ex)const title = document.querySelector(".hello");
// title은 html 문서 안에서 querySelector hello라는 class or div에서 사용
```