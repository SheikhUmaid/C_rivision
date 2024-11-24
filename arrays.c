#include <stdio.h>



// void increment(int a){
//     a++;
// }


// int square(int n){
//     int res;
//     res = n*n;
//     return (res);
// }
void square(int *n){
    *n = (*n) * (*n);
}


int main()
{
    int num = 2;
    printf("%d\n", num);// 2
    square(&num);
    printf("%d\n", num);// 4
    return 0;
}
