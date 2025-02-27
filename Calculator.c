#include <stdio.h>
int main(){
double num1,num2,result;
char Operator;
    printf("Enter First Number : ");
    scanf("%lf",&num1);
    printf("Enter Second Number :");
    scanf("%lf",&num2);
    printf("Which Opeation do you want to perform: + - * /");
    scanf("%c",&Operator);

    switch (Operator)
    {
    case '+' :
        result = num1+num2;
        printf ("Addition is : %lf\n", result);
        break;
    case '-' :
        result = num1-num2;
        printf ("Subtraction is : %lf\n", result);
        break; 
    case '*' :
        result = num1*num2;
        printf ("Multiplication is : %lf\n", result);
        break;
    case '/' :
    if (num2==0){
        printf ("Division is not possible\n");
    }
    else{
        result = num1/num2;
        printf ("Division is : %lf\n", result);
        }
        break;
    default:
    printf ("INVALID OPERATION");
        break;
    }
    return 0;
}