#include <stdio.h>
int main(){

int matrix1 [2][3] = {
    {1,2,3},
    {4,5,6}
};
printf("%d\n", matrix1[0][1]);

int matrix2 [3][3] = {
    {1,2,3},
    {4,5,6},
    {2,1,3}
};
printf("%d\n", matrix2[2][0]);

int matrix3 [4][4] = {
    {1,2,3,8},
    {4,5,6,3},
    {6,9,1,0},
    {6,4,5,0}
};
printf("%d\n", matrix3[3][3]);


return 0;
}