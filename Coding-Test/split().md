## split

```js
    string.split(separator, limit);
```

+ ##### split()함수는, 문자열을 'separator' 로 잘라서, 'limit' 크기 이하의 <br>배열에 잘라진 문자열을 저장하여 리턴한다.

+ ## separator
    + #### 필수 아님
    + #### 문자열 을 잘라 줄 구분자(문자열 또는 정규식)
    + #### 값이 입력되지 않으면 문자열 전체를 배열에 담아서 리턴한다.

+ ## limit
    + #### 필수 아님
    + #### 최대 분할 갯수


### 예시
```js
let text = "How are you doing today?" //문자열 제공
const myArr = text.split(" ")
const myArray = text.split(" ", 5); //스플릿 해서 다섯번째 인덱스까지
```


