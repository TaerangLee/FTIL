## const 그리고 let

`const` : constant(상수)이고 값은 바뀔 수 없다.
반드시 선언과 초기화를 동시에 진행이 되어야한다.

```javascript
(1) const name = "Taerang"

(2) const name;
    const name = "Taerang";


``` 

`let` : let 키워드로는 변수 중복 선언이 불가하지만, 재할당은 가능하다.

```javascript
let name = "LTR"
console.log(name);

name = "TRL";
console.log(name);
```