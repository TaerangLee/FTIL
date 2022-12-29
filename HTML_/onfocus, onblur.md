## onfocus, onblur(input)

#### input내에서 클릭하면 placeholder가 사라지는 현상을 나타냄.

```html
 <input class="passWord" 
 type="password" 
 placeholder="비밀번호" 
 required maxlength="18"
 onfocus="this.placeholder = ''" onblur="this.placeholder = '비밀번호'"/>
```

    input안에 placeholder는 비밀번호라고 입력하고 마우스로 클릭하면
    placeholder가 삭제가 되고 다시 바깥쪽을 클리하면 placeholder가 생긴다.
 