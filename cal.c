#include<stdio.h>
#include<math.h>
void add(){
    float x,y;
    printf("Enter first Number:");
    scanf("%f",&x);
    printf("\nEnter Second Number:");
    scanf("%f",&y);
     float add=x+y;
      printf("%.2f + %.2f=%.2f",x,y,add);

}
void sub(){
    float x,y;
    printf("Enter first Number:");
    scanf("%f",&x);
    printf("\nEnter Second Number:");
    scanf("%f",&y);
     float sub=x-y;
     printf("%.2f - %.2f=%.2f",x,y,sub);

}
void mul(){
    float x,y;
    printf("Enter first Number:");
    scanf("%f",&x);
    printf("\nEnter Second Number:");
    scanf("%f",&y);
     float mul=x*y;
     printf("%.2f * %.2f=%.2f",x,y,mul);

}
void div(){
    float x,y;
    printf("Enter first Number:");
    scanf("%f",&x);
    printf("\nEnter Second Number:");
    scanf("%f",&y);
     float div=x/y;
    printf("%.2f / %.2f=%.2f",x,y,div);

}
void power(){
    int x,y;
    printf("Enter Base Number:");
    scanf("%d",&x);
    printf("\nEnter Exponent Number:");
    scanf("%d",&y);
     double power=pow(x,y);
     printf("%d ^ %d=%.1f",x,y,power);

}
int main(){
int choice;
 for(;;){
printf("\n\nBASIC MATHEMATICS CALCULATOR");
printf("\nChoose operation");
printf("\n1. Addition");
printf("\n2. Subtraction");
printf("\n3. Multiplication");
printf("\n4. Division");
printf("\n5. Power");
printf("\n6.Exit");
printf("\nChoose operation:");
scanf("%d",&choice);
switch(choice){
    case 1:
    add();
    break;
    case 2:
    sub();
    break;
    case 3:
    mul();
    break;
    case 4:
    div();
    break;
    case 5:
    power();
    break;
    case 6:
    printf("\nExiting\n");
    return 0;
    default:
    printf("\nInvalid Input");

}

    }
    return 0;
}