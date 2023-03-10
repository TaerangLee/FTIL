### 좋아요 기능 설정하기

    import { HeartOutlined, HeartFilled } from "@ant-design/icons";

    npm install --save @ant-design/icons

```js
const [Like, setLike] = useState(false);
const [cnt, setCnt] = useState(0);
const [date, setDate] = useState("");

const handleLike = () => {
  setLike(!Like);
  Like ? setCnt(cnt - 1) : setCnt(cnt + 1);

  return( //return 문 안에서 사용 (따로 컴포넌트에서 파일 만들어서 생성하는 것이 좋음)

  <div>
    {Like === true ? (
      <HeartFilled
        className="heart"
        onClick={handleLike}
        style={{ color: "red", fontSize: "15px" }}
      />
    ) : (
      <HeartOutlined
        className="heart"
        style={{ color: "#a1a1a1" }}
        onClick={handleLike}
      />
    )}
  </div>;
  );
};
```

[하트 구현하기](https://ablue-1.tistory.com/21)

