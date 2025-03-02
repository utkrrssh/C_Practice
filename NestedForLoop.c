#include <stdio.h>
int main(){
    int i,j;
    printf("Enter the Height Of Triangle :");
    scanf("%d\n",&i);
    for (int i=0;i<5;i++)
    {
        for(int j =0;j<i;j++){
        printf("* ");
        }
        printf("\n"); 
    }
    return 0;  
}