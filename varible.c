#include <stdio.h>

function do_something(*a){
        // *a++; //--->>>40008--->>>11
        //  it will do anything here with a;
}



int  main(){
    // int num1 = 10;// normal variable
    int *p = &num1; //pointer and stored adress of num1 with help of num1
    do_something(p);
    return 0;
}