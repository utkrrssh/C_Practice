#include <stdio.h>
extern int x = 20;
int main(){
    
    printf("Given Value of x is : %d\n",x);
    printf("Incrementing x by 5 Gives : %d\n",x+=5);
    printf("Decrementing x by 2 Gives : %d\n",x-=2);
    printf("Multiplying x by 3 Gives : %d\n",x*=3);
    printf("Dividing x by 4 Gives : %d\n",x/=4);
    printf("The Final Value of x is : %d\n",x);

    return 0;
}