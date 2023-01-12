## gsap.to()

#### `gsap.to()`에는 2가지의 필수값이 필요하다. 대상과 속성이다.

    만약 box클래스를 오른쪽으로 200px 만큼 이동하고 싶다면 
    아래와 같이 작성하면 된다.

```js
gsap.to(".box",{
    x:200 // x방향으로 이동 (오른쪽)
});
```

    transform: translateX(200px) 과 정확히 같은 효과(CSS)

<br>

## gsap.from()

#### `gsap.from()`은 gsap.to와 정반대로 시작값을 정하고 원래대로 돌아온다.

```js
gsap.from(".box1", { 
    duration: 3, // 3초 동안
    x: 200,  //x 방향으로 
    width: 400, 
    opacity: 0.2, 
    ease: 'steps(10)'
});
```
[ease 14가지 특징 관련 사이트](https://smilehugo.tistory.com/entry/javascript-gsap3-ease-option-14ea-animation)
<br>

## gsap.set()

#### `gsap.set()`은 애니메이션 효과 없이 즉시 효과가 적용이 된다.

```js
gsap.set(".box3", {  //바로 위치 이동
    x: 100, //x축 방향으로 100이동
    width: 200, //너비 지정
    backgroundColor: 'skyblue', //배경색깔 지정해줌
});
```

[gsap site](https://lpla.tistory.com/106)

