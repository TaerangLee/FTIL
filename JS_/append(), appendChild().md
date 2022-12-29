## append()와 appendChild()

#### `append()`와 `appendChild()`의 `공통점`으로는 두 메서드 모두 <br>부모 자식에 자식 노드를 추가하는 방식이라는 점이다.<br>`차이점`으로는 자식 노드를 추가하는 방식이라는 점이다.

#### appendChild()
```js
const divElem = document.createElement('div');
const pElem = document.createElment('p');

divElem.appendChild(pElem)
//결과 <div><p></p></div>
```
    먼저 appendChild는 오로지 node객체만 자식 요소로 추가할 수 있다.
    위 코드 참조


#### append()
```js
const div = document.createElement('div');
div.append('hi')

// 결과 : <div>hi</div>
```

    append는 메서드는 appendChild와 같이 Node객체로 자식 요소를 설정할 수
    있을 뿐만 아니라, text를 사용할 수 있다는 점이다. 위 코드 참조

#### append()는 appendChild()와 다르게 여러 개의 자식 요소를 추가할 수 있다.
```js
const div = document.createElement('div')
const p = document.createElement('p')

document.body.append(div, p, 'hello')

//결과 : <div></div> <p></p> hello
```
