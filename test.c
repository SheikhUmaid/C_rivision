#include <stdio.h>


int main()
{   
    int a = 10;
    int *b = &a;

    (*b)++;
    // what will be the value of a???
    printf("%d", a);
    return 0;
}
