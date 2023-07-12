## NestJs란❓

### NestJs의 철학

    NodeJs를 위한 수많은 우수한 라이브러리, 헬퍼 및 도구들이 존재하지만, 아키텍처의 문제를 효과적으로
    해결하는 라이브러리는 없다. 이를 위해서 NestJs는 테스트가 가능하고 확장이 가능하며 느슨하게 결합되어
    유지 관리가 용이한 애플리케이션을 만들 수 있는 아키텍처를 제공한다.

### 설치

```
$ npm i -g @nestjs/cli
$ nest new nest_practice
```

![](https://velog.velcdn.com/images%2Fseongkyun%2Fpost%2Fd4d4d55f-4058-4c30-a9ce-f7d6d639dd8a%2F123.png)

### Controller

##### 처음 요청이 들어오는 입구의 역할, 비즈니스 로직을 따로 분리하기 위해 진입점을 따로 분리했다.

    예시 : 쉽게 설명하자면 식당에 들어갔을 때 좌석을 안내해주는 직원을 생각하자

    HTTP Request에 따라 어떠한 비즈니스 로직을 적용시킬지에 대한 설정을 하면 된다.

```js
import { Controller, Get } from '@nestjs/common';
import { AppService } from './app.service';

@Controller()
export class AppController {
  constructor(private readonly appService: AppService) {}

  @Get()
  getHello(): string {
    return this.appService.getHello();
  }
}
//NestJs는 데코레이터를 사용한다.
```

    Controller를 만들기 위해서는 NestJS가 제공하는 @Controller 데코레이터를 반드시 적용시켜야 하고,
    Http Method를 지정할 때도 @Get()과 같이 데코레이터를 적용시켜야 한다.

    상위 코드는 Get Method로 들어오는 요청이 있을때 getHellow함수를 실행하고,
    getHellow는 appService의 getHelloe 함수를 실행시키는 로직으로 구성된다.

### Provider

##### Provider는 NestJS의 거의 모든 데이터 처리 및 비즈니스 로직을 담당한다.

    1. 사용자 인증: Guards
    2. 클라이언트가 보내는 데이터 필터링: Pipes
    3. 비즈니스 로직: Service or Handler
    4. 예외처리: Exception Filters
    5. Porvider 처리 과정 중 위에 해당하지 않는 무언가를 하고 싶을 때: Interceptor
    6. 미들웨어: Express의 Middleware와 동일

#### Provider들의 처리 과정

![](https://velog.velcdn.com/images%2Fseongkyun%2Fpost%2Ffba2e887-322b-44e8-9224-0567e5ebb7f9%2F%EC%A0%9C%EB%AA%A9%20%EC%97%86%EC%9D%8C.png)

    Middleware(cookieparser)를 거친 후 해당 api에 접근 가능한 유저인지 확인하는 Guards를 거침

    이후 Pipes에서 클라이언트가 전달한 데이터를 원하는 형태로 가공한다.
    (string -> number와 같은 처리 또는 타입 불일치시 에러 발생)

    이후 비즈니스 로직을 처리하는 Handler(Service)에서 필요한 작업을
    수행한 후 클라이언트에게 데이터를 전송한다.

    이 과정중 발생한 예외는 Exception Filter에서 처리한다.

### Module

##### Module은 Provider와 Controller를 합치는 역할을 한다.

##### 다른 Module이 Provider를 사용할 수 있게 export 처리를 하거나 필요한 Provider가 있는 모듈을<br/> Import해서 사용할 수 있게 만들어준다.

```js
@Module({
  imports: [TodoModule],
  controllers: [AppController],
  providers: [AppService],
  exports: [AppService],
})
export class AppModule {}
```

- ##### exports에 AppService 작성: AppModule을 import하면 AppService 사용 가능

* ##### imports에 TodoModule 작성: TodoModule이 export하는 <br/>provider를 AppModule의 provider, controller가 사용 가능

      NestJS는 클라이언트의 요청별로 Controller와 Provider를 제작하고
      이를 Module로 엮어 하나의 단위를 만든다고 할 수 있다.
