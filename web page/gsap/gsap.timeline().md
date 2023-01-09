## gsap.timeline()

#### `timeline()`은 트윈 및 기타 타임라인의 컨테이너의 역할을 하는 강력한 시퀸싱 도구로, <br>전체적으로 간단하게 제어하고 타이밍을 관리할 수 있다

#### `delay` 타임란이 없으면 모든 애니메이션에 사용해야 함으로<br>복잡한 시퀀스를 구축하는 것이 훨씬 번거롭다.

```js
// 타임라인 없이(지연만 사용): 
gsap . to ( "#id" , { x : 100 , duration : 1 }); 
gsap . to ( "#id" , { y : 50 , 기간 : 1 , 지연 : 1 }); //1초 동안 대기 
gsap . to ( "#id" , { 불투명도 : 0 , 기간 : 1 , 지연     : 2 }); //2초 대기 
```

    첫 번째 애니메이션을 더 길게 만들고 싶다면 어떻게 해야 할까? 
    이후 모든 지연 을 조정해야 한다. 그리고 pause()전체 시퀀스 또는 
    restart()즉석 reverse()에서 또는 두 번 반복하려면 어떻게 해야 하면 
    이는 상당히 복잡해질 수 있지만 GSAP의 타임라인은 이를 매우 간단하게 만든다.


```js
//WITH Timelines (cleaner, more versatile)
var tl = gsap.timeline({repeat: 2, repeatDelay: 1});
tl.to("#id", {x: 100, duration: 1});
tl.to("#id", {y: 50, duration: 1});
tl.to("#id", {opacity: 0, duration: 1});

// then we can control the whole thing easily...
tl.pause();
tl.resume();
tl.seek(1.5);
tl.reverse();
...
```