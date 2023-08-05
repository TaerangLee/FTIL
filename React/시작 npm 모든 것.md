## React를 할 때 필요한 npm 설치

#### 리액트 파일

    npm install -g create-react-app
    npm create-react-app 파일명
    npx(m) create-react-app 파일명 --template typescript

#### NextJs 다운

    npx create-next-app [프로젝트명]

#### 리액트 스타일 컴포넌트

    npm i styled-components

#### 리액트 라우터

    npm install react-router-dom

    <파일 import>
    import React, { Component } from 'react';
    import { BrowserRouter as Router, Route, Routes } from "react-router-dom";
    import { BrowserRouter, Route, Router, Routes } from "react-router-dom";

#### 리액트 폰트어썸

    npm i @fortawesome/fontawesome-svg-core
    npm i @fortawesome/free-solid-svg-icons @fortawesome/free-regular-svg-icons @fortawesome/free-brands-svg-icons
    npm i @fortawesome/react-fontawesome

    <파일 import>
    import { FontAwesomeIcon } from "@fortawesome/react-fontawesome";
    import { 카멜표시 } from "@fortawesome/free-solid-svg-icons";

#### 리액트 SCSS

    npm install node-sass --save

#### 리액트 emotion

     npm i @emotion/react

     <파일 import>
     import { css, jsx  } from "@emotion/react";
     import styled from "@emotion/styled";
    /** @jsxImportSource @emotion/react */

#### 리액트 반응형

    npm install react-responsive

    <파일 import>
    import {useMediaQuery} from 'react-responsive';

[반응형 더 알기](https://velog.io/@hyerin0930/React-%EB%B0%98%EC%9D%91%ED%98%95-%EA%B5%AC%ED%98%84%ED%95%98%EA%B8%B0-with-react-responsive)

#### 리액트 Axios

    npm install axios

    <파일 import>
    import axios from 'axios';

#### 타입스크립트 환경준비

    // npm을 사용하는 경우
    npx(m) create-react-app my-app --template typescript


    타입스크립트 프로젝트 생성, 설정

    $ mkdir ts-practice
    $ cd ts-practice
    $ yarn init -y # 또는 npm init -y

##### 타입스크립트 설정파일 생성

    npm i -D styled-components@5.3.10 @types/styled-components
    https://github.com/styled-components/styled-components/issues/3998

```json
{
  "compilerOptions": {
    "target": "es5",
    "module": "commonjs",
    "strict≤/": true,
    "esModuleInterop": true
  }
}

npm install -g typescript //타입스크립트 명령어 설치

$ tsc --init // tsconfig.js 파일 자동생성
```

##### 상태관리 라이브러리 install

    react-query : npm install @tanstack/react-query
    react-query-devtools : npm install @tanstack/react-query-devtools
