## Axios 사용

##### `axios`란 브라우저, Node.js를 위한 Promise API를 활용하는 HTTP 비동기 통신<br> 라이브러리이다.

- #### GET

  ```js
  const handleGet = () => {
    axios
      .get("https://pokeapi.co/api/v2/berry/1")
      .then((response) => {
        console.log(response.data);
      })
      .catch((error) => {
        console.log(error);
      });
  };
  ```

- #### POST

  ```js
  const handlePost = () => {
    axios
      .post("https://24db-210-218-52-13.jp.ngrok.io/taerang", {
        //api 작성
        ID: Id,
        Pw: Pw,
      })
      .then((response) => {
        console.log(response.data);
      })
      .catch((error) => {
        alert("실패");
      });
  };
  ```

  #### 전체적

  ```jsx
  import React, { useEffect, useState } from "react";
  import * as S from "./styled";
  import axios from "axios";

  function LoginPage() {
    const [Id, setId] = useState("");
    const [Pw, setPw] = useState("");

    const handleGet = () => {
      axios
        .get("https://pokeapi.co/api/v2/berry/1")
        .then((response) => {
          console.log(response.data);
        })
        .catch((error) => {
          console.log(error);
        });
    };

    const handlePost = () => {
      axios
        .post("https://24db-210-218-52-13.jp.ngrok.io/taerang", {
          ID: Id,
          Pw: Pw,
        })
        .then((response) => {
          console.log(response.data);
        })
        .catch((error) => {
          alert("실패");
        });
    };

    return (
      <>
        <S.AuthDiv>
          <S.IDInput
            onChange={(e) => {
              setId(e.target.value);
              console.log(Id);
            }}
            value={Id}
            placeholder="ID"
          />
          <S.PWInput
            onChange={(e) => {
              setPw(e.target.value);
              console.log(Pw);
            }}
            value={Pw}
            placeholder="PW"
          />
          <button onClick={handlePost}>입력완료</button>
        </S.AuthDiv>
      </>
    );
  }

  export default LoginPage;
  ```

  + ### fetch와 axios의 차이점

![](https://media.discordapp.net/attachments/956190154454876183/1089835593246179360/image.png?width=1156&height=1030)
