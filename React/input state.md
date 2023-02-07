## react로 input 상태 관리하기

### input 1개만 관리할 경우

```js
import React, { useState } from 'react';

function InputSample() {
  const [text, setText] = useState('');

  const onChange = (e) => {
    setText(e.target.value); //이벤트 객체 e를 파라미터로 받아와서 사용 할 수 있다. 
    //e.target은 인베트가 발생한 DOM인 input DOM을 가르키게 된다. 
    //이 DOM의 value값, 즉 e.target.value를 조회하면 현재 input에 입력한 값을 얻을 수 있다.
  };

  const onReset = () => {
    setText('');
  };

  return (
    <div>
      <input onChange={onChange} value={text}  />
      <button onClick={onReset}>초기화</button>
      <div>
        <b>값: {text}</b>
      </div>
    </div>
  );
}

export default InputSample;
```

### 여러개의 input state 관리하기

```js
import React, { useState } from 'react';

function InputSample() {

    const [inputs, setInputs] = useState({
        name: '',
        nickname: ''

    });

    const { name, nickname } = inputs;

    const onChange = (e) => {
        // setText(e.target.value);
        const { value, name } = e.target; // 우선 e.target 에서 name 과 value 를 추출
        setInputs({
            ...inputs, //기존의 input 객체를 복사한 뒤
            [name]: value //name 키를 가진 값을 value 로 설정
        });
    };

    const onReset = () => {
        // setText('');
        setInputs({
            name: '',
            nickname: '',
        });
    }
    return (
        <div>
            <input placeholder="이름" name="name" onChange={onChange} value={name} />
            <input placeholder="닉네임" name="nickname" onChange={onChange} value={nickname} />
            <button onClick={onReset}>초기화</button>
            <div>
                <b>이름: {name}</b><br></br>
                <b>닉네임: {nickname}</b>
              
            </div>
        </div>
    );
}

export default InputSample;
```