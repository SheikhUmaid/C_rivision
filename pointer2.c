#include <stdio.h>






int *gimmePointer(){
    int *ptr = (int *)malloc(sizeof(int));
    *ptr = 10;
    return ptr;
}


int main()
{
    int *mainPtr;
    mainPtr = gimmePointer();
    printf("%d", *mainPtr);
    return 0;
}
