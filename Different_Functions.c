#include <stdio.h>

double number_lele(void);
void chhap_de_result(double);
double add_numbers(double,double);

int main(){
double num1, num2, res;
num1 = number_lele();
num2 = number_lele();
res = add_numbers(num1,num2);
chhap_de_result(res);
}

double number_lele(void){
    double num;
    printf ("Enter Value : ");
    scanf("%lf",&num);
    return num;
}

void chhap_de_result(double result){
    printf("Result = %lf\n", result);
}

double add_numbers(double n1,double n2){
double res = n1+n2;
return res;
}


