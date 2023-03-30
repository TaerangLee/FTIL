##

## Link와 useNavigate

- ### Link

        npm install react-router-dom --save

  ```js
  import React from "react";
  import { useNavigate } from "react-router-dom";

  function Login() {
    const navigate = useNavigate();

    const goToMain = () => {
      navigate("/main");
    };

    // 실제 활용 예시
    // const goToMain = () => {
    //   if(response.message === "valid user"){
    //     navigate('/main');
    //   } else {
    //     alert("가입된 회원이 아닙니다. 회원가입을 먼저 해주세요.")
    //     navigate('/signup');
    //   }
    // }

    return (
      <div>
        <button className="loginBtn" onClick={goToMain}>
          로그인
        </button>
      </div>
    );
  }

  export default Login;
  ```

  - ##### Router.js에서 설정한 path로 이동하는 첫 번째 방법은 Link 컴포넌트를 사용하는 방법이다.
  - ##### 클릭 시 바로 이동하는 로직 구현 시에 사용 용이하다.
  - ##### `react-router-dom` 에서 제공하는 `Link` 컴포넌트는 DOM 에서 `a` 태그로 변환이 된다.
  - ##### 이런 a 태그와 마찬가지로 Link 컴포넌트도 지정한 경로로 바로 이동을 시켜준다

        a태그와 Link의 차이

        a : 외부 프로젝트로 이동하는 경우
        Link : 프로젝트 내에서 페이지 전한하는 경우

* ### useNavigate

      npm install react-router-dom --save

  ```js
  import React from "react";
  import { useNavigate } from "react-router-dom";

  function Login() {
    const navigate = useNavigate();

    const goToMain = () => {
      navigate("/main");
    };

    // 실제 활용 예시
    // const goToMain = () => {
    //   if(response.message === "valid user"){
    //     navigate('/main');
    //   } else {
    //     alert("가입된 회원이 아닙니다. 회원가입을 먼저 해주세요.")
    //     navigate('/signup');
    //   }
    // }

    return (
      <div>
        <button className="loginBtn" onClick={goToMain}>
          로그인
        </button>
      </div>
    );
  }
  ```

  - ##### `useNavigate` 훅을 실행하면 페이지 이동을 할 수 있게 해주는 함수를 반환한다.<br> 반환하는 함수를 `navigate`라는 변수에 저장 후 `navigate`의 인자로 설정한 <br>path값을 넘겨주면 해당 경로로 이동할 수 있다.
  - ##### `Link`와 다른 점은 함수 호출을 통해 페이지를 이동하기 때문에 위와 같이 특정 조건을 <br>충족할 경우에 페이지 이동을 하도록 할 수 있습니다.

## 두 가지 방법 활용법

### 1. Link

- ##### 클릭 시 바로 이동하는 로직 구현 시에 사용 ex) 상품 리스트에서 상세 페이지 이동 시

### 2. useNavigate

- ##### 페이지 전환 시 추가로 처리해야 하는 로직이 있을 경우 `useNavigate` 사용
- ##### ex) 로그인 버튼 클릭 시 (회원가입 된 사용자 -> Main || 회원가입 안 된 사용자 -> SignUp)
