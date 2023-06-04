#include<stdio.h>
#define pi 3.14

int main(){
    int a;
    a=4;
    const float b=7.333;
    //pi = 3.2; this can't be done as pi is constant and it has been defined by using keyword "define"
    //b=7.22 ;//this cant be done as b is constant in previous line
    printf("Helloworld\n");
    printf("%f",pi );
    
}