# Promise & async/await 그리고 API
<br>

##  Promise와 async/await

### Promise

+ ##### Promise란 비동기 처리에서 사용되는 객체로, promise가 상태를 관리하여서 다른<br>코드가 비동기적으로 실행될 수  있도록 만드는 객체이다.
    ##### 👉 axios 또한 promise를 기반으로 만들어짐


### async/await

+ ##### '.then' 문법에 의해 생기는 '콜백지옥'을 극복하기 위해 만들어진 문법으로,<br>async는 함수 이름의 제일 앞에, await는 결과를 기다릴 함수 앞에 작성한다.
    ##### 👉 async는 함수에서 비동기 처리를 위한 promise 동작을 한다는 것을 명시한다.
    ##### 👉 await은 호출되는 함수가 적절한 결과를 반환할 때까지 기다리도록 동작한다.


### API 호출

##### 🔥 호출 과정

+ ##### useState를 이용해 사용자 리스트를 상태로 관리하고, useEffect를 이용해 API를 불러온다.
+ ##### useEffect는 함수를 반환해야 하는데 async/await은 Promise 객체를 리턴하기 때문에 사용할 수 없다.

    ##### 👉 따라서, useEffect 안에서 async/await 함수를 선언하고 그 안에 setState()를 이용해 state을 관리해야 한다.

```js
//< axios로 사용! >

import React, { useState, useEffect } from 'react';
import axios from 'axios';

function Users() {
    // state인 users를 useState()로 선언하기
    const [users, setUsers] = useState([]);
    
    // async와 await를 이용한 useEffect()를 선언하기
    useEffect(()=>{
        async function fetch() {
            const response = await axios.get('<URL>');
        // 일단 response의 형태를 확인하고
        console.log(response.data);
        // fetch 함수 아래에 setUsers를 해주어야 한다.
        setUsers(response.data);
        };
        fetch();

    }, [])
    
    // users 출력
    const userName = users.map(
        (user) => (<li key={user.id}> {user.name} </li>)
    );

    return (
        <>
            <h4>사용자 리스트</h4>
            <div> {userName} </div>
        </>
    );
}

export default Users;
```

```js
//< axios 사용 X >
 const getMovie = async () => {
    const json = await (
      await fetch(`https://yts.mx/api/v2/movie_details.json?movie_id=${id}`)
    ).json();

    setMovies2(json.data.movie); //setState
    setLoading2(false);
  };

  useEffect(() => {
    getMovie();
  }, []);
```







