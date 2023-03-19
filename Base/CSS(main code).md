## CSS MAIN CODE


+ text-decoration:line-through;  >>글씨를 기준으로 중간에 선을 긋기

+ text-decoration:under line;  >>글씨를 기준으로 아래에 선을 긋기
+ background: >> 배경화면을 지정하는 것
+ text-indent: >> 들여쓰기, 내어쓰기 속성
+ flex-wrap: >> 컨테이너가 더 이상 아이템들을 한 줄에 담을 수 없을 경우 줄바꿈을 어떻게 할지 결정

## <항상 display:flex는 기본으로 깔고 들어가야한다>

## `justify-content:` >> 메인축 방향 정렬 <중요>

    flex-start >> 순서대로 앞에 위치을 하게 됨.

    flex-end >> 순서대로 뒤에 위치를 하게 됨.

    center >> 전체를 기준으로 중간으로 정렬로 만든다.

    spcae-between >> 아이템들의 “사이(between)”에 균일한 간격을 만들어 준다..

    space-evenly >> 아이템들의 "둘레"에 균일한 간격을 만든다.

관련 사이트 : https://developer.mozilla.org/ko/docs/Web/CSS/position

+ align-items: >>세로로 대부분 가운데 맞춤

+ z-index:1 >> 이미지나 문자를 겹쳐서 사용할 때 사용하는 코드

+ ## Position: ;

`static` 구성요소를 세부적으로 진행함에 따라 배치를 한다.

`relative` 요소를 구체적인 목표에 따라 배치하고, 자기 자신을 기준 `top`으로, `right, left, bottom`의
값에 따라서 오프셋을 적용한다. 넓은 공간일 때에는 static일 때와 같다.

`absolute` 요소를 일반적인 문서에서 제거하고, 페이지 레이아웃에 공간에  배치하지 않는다. 
대신에 가장 근접한 위치 보호 장치에 대해서 상대적으로 배치를 한다.

`fixed` 요소를 일반적인 문서에서 제거하고, 페이지 레이아웃에 공간도 배치하지 않는다.

`sticky` 요소를 대략적인 방향에 따라서 배치하고, 테이블 관련 요소를 가장 가까운, 초밥이 되는 
조상과, 표관련 요소를 포함하는 컨테이닝(가장 가까운 블록 레벨 상위)을 기준 `top, right, left, bottom`
의 값 블록에 따라 오프셋을 적용한다.

이 값은 항상 새로운 축적임을 생성한다.. 끈끈한 요소는 "스크롤 동작"
`( overflow가 hidden, scroll, auto또는 overlay)`이 나타나는 가장 가까운 조상에 달라붙으며, 
사실 그 조상은 썰매 불가이며 실제로 소서 가능한 조상이 발생하는 경우 "끈끈한" 
동작을 보이지 않는 점에 주의하는 것.

관련 사이트 : https://studiomeal.com/archives/197

