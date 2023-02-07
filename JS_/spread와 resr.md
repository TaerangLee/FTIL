# spread와 rest


## spread

+ ##### 예로 다음과 같은 객체들이 있다고 가정한다.

```js
const slime = {
  name: '슬라임'
};

const cuteSlime = {
  name: '슬라임',
  attribute: 'cute'
};

const purpleCuteSlime = {
  name: '슬라임',
  attribute: 'cute',
  color: 'purple'
};

console.log(slime);
console.log(cuteSlime);
console.log(purpleCuteSlime);
```

##### 위 코드에서의 핵심은, 기존의 것을 건들이지 않고, 새로운 객체를 만든다는 것이다.
##### 이러한 상황에 사용 할 수 있는 유용한 문법이 spreaddlek. 사용하면 아래와 같다.

```js
const slime = {
  name: '슬라임'
};

const cuteSlime = {
  ...slime,
  attribute: 'cute'
};

const purpleCuteSlime = {
  ...cuteSlime,
  color: 'purple'
};

console.log(slime);
console.log(cuteSlime);
console.log(purpleCuteSlime);

//--------------------------------

const animals = ['개', '고양이', '참새'];
const anotherAnimals = [...animals, '비둘기'];
console.log(animals); // 개 고양이 참새 
console.log(anotherAnimals);// 개 고양이 참새 비둘기

//----------------------------------

//배열에서 spread연사자를 여러번 사용 할 수도 있다.

const numbers = [1, 2, 3, 4, 5];

const spreadNumbers = [...numbers, 1000, ...numbers];
console.log(spreadNumbers); // [1, 2, 3, 4, 5, 1000, 1, 2, 3, 4, 5]
```


## rest 

#### Rest파라미터는 Rest의 역할을 하는 함수 파라미터이다. (뒤에 남은 요소들을 배열로 받음)

+ ##### 예로 다음과 같은 객체들이 있다고 가정한다.

```js
function test(a, b, ...rest){ //Rest 파라미터 (...rest)
    console.log(a, b); //1, 2
    console.log(rest); // [3, 4, 5]
}

test(1,2 3,4,5);
````
