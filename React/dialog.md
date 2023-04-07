### dialog (map 함수 사용해서 버튼도 구현)

- #### index.jsx (Dialog)

```Js
import React, { useState } from "react";
import * as S from "./style";
import { FontAwesomeIcon } from "@fortawesome/react-fontawesome";
import { faX } from "@fortawesome/free-solid-svg-icons";
import ChooseButton from "../ChooseButton";
import { useNavigate } from "react-router";

function Dialog() {
  const [total, setTotal] = useState(["700원", "1000원"]);
  const [confirm, setConfirm] = useState("");

  const navigate = useNavigate();

  const onClickConfirm = (page) => {
    navigate(page);
  };

  return (
    //시작
    <dialog style={{ border: "0", borderRadius: "7px", padding: "0" }}> //dialog 지정을 전체로 선택.
      <S.orderBox>
        <S.orderContent>
          <form className="deleteContent">
            <button style={{ backgroundColor: "white", border: "0" }}>
              <FontAwesomeIcon className="delete" icon={faX} />
            </button>
          </form>
          <ChooseButton title="Flavor" childs={["복숭아", "레몬", "청포도"]} />
          <ChooseButton title="Size" childs={["300ml", "500ml"]} />
          <ChooseButton title="Pay" childs={["계좌이체", "현금결제"]} />
          <div className="totalContent">
            <span>Total : 500W</span>
          </div>
          <div className="orderButton">
            <button
              onClick={() => {
                // setConfirm(window.confirm("주문을 하시겠습니까?"));
                // console.log(confirm);
                // if (confirm === false) {
                //   onClickConfirm("/payment");
                // }
                if (window.confirm("주문을 하시겠습니까?")) {
                  setConfirm(true);
                  console.log(confirm);
                  onClickConfirm("/payment");
                } else {
                  setConfirm(false);
                  console.log(confirm);
                }
              }}
            >
              주문하기
            </button>
          </div>
        </S.orderContent>
      </S.orderBox>
    </dialog> //끝
  );
}

export default Dialog;
```

- #### index.jsx(ChooseButton)

```js
/** @jsxImportSource @emotion/react */ //emotion 사용
import React, { useState } from "react";
import * as S from "../Dialog/style";
import Dialog from "../Dialog";
import ChooseText from "./text";
import { css, jsx } from "@emotion/react";
import styled from "@emotion/styled";

function ChooseButton({ title, childs }) {
  //props를 받아옴
  const [selected, setSelected] = useState("");

  const selectStyle = (value) => {
    //emotion으로 style 지정
    return (
      value === selected &&
      css`
        background-color: #ff5c5c;
        color: white;
      `
    );
  };

  return (
    <div className="chooseContent">
      <span>{title}</span> //props의 title값을 출력
      <div className="choose">
        {childs.map((child, id) => {
          //childs라는 함수를 props를 통해서 받음 변수명 child <id는 기본 설정!>
          return (
            <S.Child
              key={id}
              className="fruit"
              css={() => selectStyle(child)}
              onClick={() => {
                setSelected(child);
              }}
            >
              {child}
            </S.Child>
          );
        })}
      </div>
    </div>
  );
}

export default ChooseButton;
```
