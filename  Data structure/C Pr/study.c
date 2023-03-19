# include <stdio.h>

// int main(void){
//   int num1, num2;
//   scanf("%d %d", &num1, &num2);

//   // if((num1 <= 50 && num2 <= 50) || num1 + num2 <= 110){
//   //   printf("젊습니다.");
//   // }else{
//   //   printf("늙습니다.");
//   // }

//   int num1 = 100;
//   num1 = num1 + 10 > 110 ? 10 : 20;
//   printf("%d", num1); //20


  
// }




int main(void){

  int num = 0, a, result=0; 
  scanf("%d", &a);

  while(num<=a){ //num은 0이고 a는 지정 받은 수 ! 
    result = num * 3;
    num++;
}
return 0;

}


//두명의 나이를 입력을 받아서 각각 두명의 나이가 50이하 또는 110살 이하일 경우에는 "젊습니다." 아니면 "늙습니다";

