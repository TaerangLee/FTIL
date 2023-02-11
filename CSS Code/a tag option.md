## a tag 내에서 자주 사용하는 코드 


    background-color : 지정한 것을 기준으로 바탕 색깔을 지정한다.
    
    color :  지정한 것을 기준으로 그 색깔을 바꿔준다.

    transition-duration: (초); 몇 초 동안 이 hover를 실행시킬 때 사용한다.

    transform : (Size); 지정한 것에 크기를 지정하여서 크게 나타낸다

                => transform을 쓸 때에는 천천히 크기가 변화되는 
                (transition: all 0.2s linear) 을 사용하고 0.2s 0.2초 동안 실행된다.
                transition-duration; 도 같이 사용할 수 있다.

#
    사진을 0.2초 동안 크기를 1.2로 늘리는 법
  <br>

```css
.IM_ALL{
    transition: all 0.2s linear;
   
}

.IM_ALL:hover{
    transform: scale(1.3);
}
```


## a tag의 모든 것

`hover`
    
    지정 방법 : .(class 이름 등등..):hover{ ...}
    a:hover{ ...}
    해당 링크에 마우스를 올렸을 때 상태를 나타낸다.

`active`

    지정 방법 : ..(class 이름 등등..):active{ ...}
      a:active{ ...}
    해당 링크를 클릭하였을 때 상태를 나타낸다.

`visited`

    지정 방법 : ..(class 이름 등등..):active{ ...}
      a:visited{ ...}
    해당 링크를 방문한 뒤 상태를 나타낸다.

`link`

    지정 방법 : ..(class 이름 등등..):active{ ...}
      a:link{ ...}
    해당 링크를 방문하기 전 상태를 나타낸다.



    

