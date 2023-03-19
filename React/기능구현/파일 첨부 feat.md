### 이미지/파일 첨부하는 기능

    import axios from "axios";

```js

  const [fileImage, setFileImage] = useState("");

  const config = { "Content-Type": "application/json" };

  // 파일 저장
  const saveFileImage = (e) => {
    setFileImage(URL.createObjectURL(e.target.files[0]));
  };

  // 파일 삭제
  const deleteFileImage = () => {
    URL.revokeObjectURL(fileImage);
    setFileImage("");
  };

    return (
   <div>
          {fileImage && (
            <img
              className="IMG"
              alt="sample"
              src={fileImage}
              style={{ margin: "auto" }}
            />
          )}
          <div
            style={{
              alignItems: "center",
              justifyContent: "center",
            }}
          >
            <label htmlFor="input-file" className="clickButton">
              여기를 누르세요
            </label> {/*label을 사용해서 다양한 스타일링 가능하게 만든다.*/}
            <input
              name="imgUpload"
              type="file"
              id="input-file"
              accept="image/*"
              onChange={saveFileImage}
              style={{ display: "none" }}
            />

            <button
              style={{
                backgroundColor: "gray",
                color: "white",
                width: "55px",
                height: "40px",
                cursor: "pointer",
              }}
              onClick={() => deleteFileImage()}
            >
              삭제
            </button>
          </div>
        </div>
    );