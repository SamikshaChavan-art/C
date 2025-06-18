#include<stdio.h>
int add(){
    int a, b;
    printf("Enter two numbers:");
    scanf("%d%d", &a, &b);
    return a+b;
}
int sub(){
    int a, b;
    printf("\nEnter two numbers:");
    scanf("%d%d", &a, &b);
    return a-b;
}
int mul(){
    int a, b;
    printf("\nEnter two numbers:");
    scanf("%d%d", &a, &b);
    return a*b;
}
int div(){
    int a, b;
    printf("\nEnter two numbers:");
    scanf("%d%d", &a, &b);
    return a/b;
}

int main(){
  int ch;
//   while is used to run the current loop infinate number of times as calculator wil show options infinate number of times
  while(1){
    printf("\n1. Addition \n2. Substraction \n3. Multiplication \n4. Division \n5. Exit \nEnter a choice");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
        printf("\nAddition is %d", add());
        break;
    case 2:
        printf("\nSubstraction is %d", sub());
        break;
    case 3:
        printf("\nMultiplication is %d", mul());
        break;
    case 4:
        printf("\nDivision is %d", div());
        break;
    case 5:
        return 0;
        break;
    default:
    printf("\nInvalid Choice");
        break;
    }
  }
}