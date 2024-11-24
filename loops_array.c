#include <stdio.h>
    
int main()
{
    // what kind of data i am storing;
    // float arr[10] = {1.1,2.1,3.3,4.4,5.2,6.2,7.1,8.1,9.10};
    int a[10] = {1,2,3,4,5,6,7,8,9};
    int i;
    int sum = 2;
    //init  cond state
    // for(i=0;i<=8;i++){
    //     printf("%d X %d = %d\n",sum,i,sum*i);
    // }
    // printf("sum is %d\n", sum);
    // //here
    i = 0;
    while(i<=10){
        printf("%d X %d = %d", sum, i, sum*i);
        i++;
    }
    printf("done");
    return 0;
}

