## React-useState()

#### `state` 동적인 값이라고 부른다. 사용자 인터랙션을 통해 컴포넌트의 상태값이 <br> 동적으로 바뀔 경우에는 상태를 관리하는 것이 필요하다. 

### useState() Function 사용법

```js
import React, { useState } from 'react'; //리액트 패키지에서 useState 함수를 불러온다.

const [number, setNumber] = useState(0);
//1번째 원소 number은 현재 상태 값 변수이고 
//2번 째 원소는 setNumber는 상태 값을 갱신해주는 Setter 함수다.
//usestate 괄호 안의 값은 상태의 초기 값이다.

const onIncrease = () => {
    setNumber(preNum => preNum + 1);
}
//상태 값 갱신 함수 setNumber는 피라미터로 전달받은 preNum을 최신 상태로 설정해준다.
```

[더 많은 정보](https://xiubindev.tistory.com/97)


