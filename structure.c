#include <stdio.h>
int some_func(){
    int a = 10;

    if(a==10){
        return (1);
    }else{
        return (0);
    }
}


int is_nine(int a){
    if(a==9){
        return 1;
    }else{
        return 0;
    }
}


int main()
{
    int sum = 8;
    if(is_nine(sum)){
        printf("sum is nine");
    }
    else{
        printf("sum is  not nine");
    }
    return 0;
}
