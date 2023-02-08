## map

### `map`은 배열 안의 각 원소를 변환 할 때 사용하며, 이 과정에 새로운 배열이 만들어진다.

+ #### 아래의 예시 (map 사용 X)

```js
const array = [1, 2, 3, 4, 5, 6, 7, 8];
//map을 사용 안 하고 모든 숫자들의 제곱을 구한다면

const squared = [];
for (let i = 0; i < array.length; i++) {
  squared.push(array[i] * array[i]);
}

console.log(squared);


//forEach를 사용하는 경우
const array = [1, 2, 3, 4, 5, 6, 7, 8];

const squared = [];

array.forEach(n => {
  squared.push(n * n);
});

console.log(squared);
```

#### 결과는 [1, 4, 9, 16, 25, 36, 49, 64];

+ ### map을 사용

```js
const array = [1, 2, 3, 4, 5, 6, 7, 8];

const square = n => n * n;
const squared = array.map(square);
console.log(squared);

//---------------------------------(아래와 같은 코드.)

const squared = array.map(n => n * n);
console.log(squared);
```