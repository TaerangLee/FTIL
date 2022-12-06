# querySelector, querySelectorAll 사용법

## querySelector

#### `querySelector()`는 특정한 name, id, class를 제한하지 않고 css 선택자를<br>사용하여서 요소를 찾아낸다.
 ★ 같은 id, class 일 경우에는 스크립트의 최상단 요소만 로직에 포함한다 ★

 ```js
 const test1 = document.querySelector(".class(클래스 이름)"); //항상 #
 const test2 = document.querySelector("#id(아이디 이름)"); // class의 겂.
 ```

 ## querySelectorAll

 #### `querySelector`와 사용 방법은 동일하며 선택자를 선택하여 배열과 비슷한 객체인 nodeList를 반환합니다. 반환객체가 nodeList이기에 for문 또는 forEach문을 사용한다.

 ```js
 querySelectorAll("#id,.class"); //id 안에 있는 class 전체를 말함.
 querySelectorAll(".div.(이름) h1"); //div이름 중 안에 있는 h1의 전체를 말함.
```