## React를 할 때 필요한 npm 설치

#### 리액트 파일

    npm install -g create-react-app
    npm create-react-app 파일명

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
     import { css } from "@emotion/react";
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
