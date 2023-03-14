## useNavigate 

#### `useNavigate`는 특정 주소로 이동해주는 태그였다면, Navigate는 <br>특정 행동을 했을 때해당 주소로 이동해줄 수 있게 만들어 준다.




+ ### useNavigate 사용법

        useNavigate는 양식이 제출되거나 특정 event가 발생할 때,  
        url을 조작할 수 있는 interface를 제공한다.

    ```js
    import { useNavigate } from 'react-router-dom';

    function Func() {
    const navigate = useNavigate();

    const onClickImg = () => {
        navigate(`/comment/id/등등 내가 원하는 주소`);
    };

    return (
        <img src={...} alt={...} onClick={onClickImg} />
    );
    }

    export default Func;
    ```


+ ### useNavigate의 인자

        navigate("../success",  { replace: true});

        첫 번째 인자로는 주소를 받으며 두 번째 인자로 { replace, state } 인수를 사용합니다.