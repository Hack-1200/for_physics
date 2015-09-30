//Это программа по табуляции функции
#include <stdio.h>
#include <math.h>
//наша функция	
float f(float x){
  return x*x;
}

int main(){
  float a ;  // начало
  float b ;  // конец
  float dx=-1;  // шаг, инициализируется изначально с неправильным значением
  printf("\nVvedite nachalo:"); scanf("%f",&a  );
  printf("Vvedite konec:"  ); scanf("%f",&b  );
  while(dx<=0){ // Мучаем пользователя6 пока не поумнеет
    printf("Vvedite shag:"   ); 
    scanf("%f",&dx );
  }
  float x = a; //переменная для перебора значений x
  float min = a, max = b; //мин и макс заданного диапазона
  if (a>b) {  //Меняем местами, если а больше b
    min = b;  
    max = a;
    dx = -dx; // идем вниз
  }
  while(x<=max && x>=min){
    printf( "\nx=%f\ty=%f",x,f(x) );
    x+=dx;
  }

}
