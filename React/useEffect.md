# useEffect 

#### `useEffect`란 컴포넌트가 렌더링 될 때 특정 작업을 실행할 수 있도록 하는 Hook이다.

## 사용 방법

### 선업 방법

+ #### 첫번째 인자(effect)는 함수, 두번째 인자는 배열(deps)이 들어간다.

```js
import react, { useEffect } from "react";
useEffect(effect, [, deps]);
```

### 1) effect

#### - 렌더링 이후 실행할 함수(리액트는 이 함수를 기억을 했다가 DOM 업데이트 후 불러낸다.)
#### - effect 함수에서 함수를 return 할 경우 그 함수가 그 컴포넌트가 Unmount 될 때 정리의 개념으로 한 번 실행이 된다.

#### [예시(아래와 같음)]
+ #### componentDidMount & componentDidUpdate 를 함께 표현한 것으로 볼 수 있다.

```js
useEffect(() => {
	// 수행할 함수
});
import React, { useState, useEffect } from "react";

const UseEffectTest = () => {
  const [count, setCount] = useState(0);
  const countUp = () => setCount(count + 1);

  useEffect(() => {
    console.log("useEffect!!", count);
  });

  return (
    <div>
      <p>{count}번 클릭!</p>
      <button onClick={countUp}>Click Me</button>
    </div>
  );
};

export default UseEffectTest;

//렌더링이 되었을 때, 그리고 count 스테이트가 변경될 때 마다 console.log가 찍히는 것을 볼 수 있다.
//componentDidMount & componentDidUpdate 를 함께 표현한 것으로 볼 수 있다.
```

### 2) effect

#### - 배열의 형태로, 특정한 값이 변경될 때 effect 함수를 실행 하고 싶을 경우 배열 안에 그 값을 넣는다.
#### - 빈 배열을 입력할 경우 컴포넌트가 Mount 될 때에만 실행이 된다.

#### [예시(아래와 같음)]   <최초 렌더링시에만 실행되는 예시>

```js
useEffect(() => {
	// 수행할 함수
}, 빈배열);
import React, { useState, useEffect } from "react";

const UseEffectTest = () => {
  const [count, setCount] = useState(0);
  const countUp = () => setCount(count + 1);

  useEffect(() => {
    console.log("useEffect!!", count);
  }, []);

  return (
    <div>
      <p>{count}번 클릭!</p>
      <button onClick={countUp}>Click Me</button>
    </div>
  );
};

export default UseEffectTest;
```

#### [예시(아래와 같음)]   <특정 값이 변경될 때에만 실행하는 경우>

```js
useEffect(() => {
	// 수행할 함수
}, 특정배열);
import React, { useState, useEffect } from "react";

const UseEffectTest = () => {
  const [count, setCount] = useState(0);
  const [name, setName] = useState("GodDaeHee");
  const countUp = () => setCount(count + 1);
  const handleChangeName = (e) => setName(e.target.value);

  useEffect(() => {
    console.log("useEffect!!", count);
  }, [count]);

  return (
    <div>
      <p>안녕하세요. {name} 입니다.</p>
      <input onChange={handleChangeName} />
      <p>{count}번 클릭!</p>
      <button onClick={countUp}>Click Me</button>
    </div>
  );
};

export default UseEffectTest;
```
