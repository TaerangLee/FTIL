## swiper 효과를 setinterval로 표현하기


### html
```html
<!DOCTYPE html>
<html lang="ko">
    <head>
        <meta charset="UTF-8" />
        <meta http-equiv="X-UA-Compatible" content="IE=edge" />
        <meta name="viewport" content="width=device-width, initial-scale=1.0" />
        <title>test</title>
        <script src="./app.js" defer></script>
        <link rel="stylesheet" href="style.css" />
    </head>
    <body>
        <div class="container">
            <div class="item" id="i0"></div>
            <div class="item" id="i1"></div>
            <div class="item" id="i2"></div>
            <div class="item" id="i3"></div>
            <div class="item" id="i4"></div>
            <div class="item" id="i5"></div>
        </div>
    </body>
</html>

```

### css
```css
body,
html {
    padding: 0;
    margin: 0;
    width: 100%;
    height: 100%;
    display: flex;
    align-items: center;
    justify-content: center;
    overflow: hidden;
}
.container {
    width: 1500px;
    height: 300px;
    background-color: white;
    display: flex;
    align-items: center;
    justify-content: center;
    border-radius: 30px;
    color: red;
    box-shadow: -5px -5px 30px 5px red, 5px 5px 30px 5px blue;
}
.item {
    right: -40px;
    width: 200px;
    height: 200px;
    position: absolute;
    border-radius: 20px;
}
#i0 {
    background-color: red;
    box-shadow: 0 0 30px 5px red;
}
#i1 {
    background-color: orange;
    box-shadow: 0 0 30px 5px orange;
}
#i2 {
    background-color: yellow;
    box-shadow: 0 0 30px 5px yellow;
}
#i3 {
    background-color: green;
    box-shadow: 0 0 30px 5px green;
}
#i4 {
    background-color: blue;
    box-shadow: 0 0 30px 5px blue;
}
#i5 {
    background-color: blueviolet;
    box-shadow: 0 0 30px 5px blueviolet;
}
.i1 {
    translate: 00px;
    opacity: 0;
}
.i2 {
    translate: -300px;
    transition: ease-in-out 0.3s;
    opacity: 0.1;
}
.i3 {
    translate: -600px;
    transition: ease-in-out 0.3s;
    opacity: 0.4;
}
.i4 {
    translate: -900px;
    transition: ease-in-out 0.3s;
    opacity: 1;
}
.i5 {
    translate: -1200px;
    transition: ease-in-out 0.3s;
    opacity: 0.4;
}
.i6 {
    translate: -1500px;
    transition: ease-in-out 0.3s;
    opacity: 0.1;
}


```
### js
```js
let i = 0;

const move = () => {
    for (let j = 0; j <= 6; j++) {
        const target = document.querySelector(`#i${j % 6}`);
        target.classList.remove('i' + ((i % 6) + 1));
        target.classList.add('i' + ((++i % 6) + 1));
    }
};
move();


setInterval(move, 1000);
```