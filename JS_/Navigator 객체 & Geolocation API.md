## Navigator 객체 & Geolocation API

#### `Window` 객체의 `navigator` 프로퍼티는 브라우저 제조사와 버전 정보를 포함하고 있는<br> Navigator객체를 가리킴. Navigator 객체의 이름은 넷스케이프의 초기 브라우저인<br> 네비게이터(Navigator)에서 비롯됨. 그러나 다른 모든 브라우저에서도 지원함. 


### Navigator 프로퍼티

    속성            특징
    
    appName    :    웹브라우저의 전체 이름
    
    appVersion :    브라우저 제조사와 버전 정보 등을 포함한 문자열을 뛰 따름

    userAgent  :    브라우저가 USER-AGENT HTTP 헤더로 보낸 문자열이다. (appVersion과 비슷함)

    platform   :    브라우저를 실행하고 있는 운영체제를 식별하는 문자열이다. 


##  Geolocation 

#### `Geolocation API`는 js 프로그램이 사용자의 실제 위치를 브라우저에게 <br>요청 할 수 있게 도와준다.