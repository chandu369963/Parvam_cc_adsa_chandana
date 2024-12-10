#include<stdio.h>
//datatype fun_name(parameters){// function declaration}
//    statements por some operations // function defination
//}
int sum(int a, int b){
    return a+b;
}
int main(){
    int op1, op2, add;
    printf("enter any 2 numbers:");
    scanf("%d", &op1, &op2);
    add=sum(op1,op2); //function call
    printf("sum of %d & %d: %d",op1,op2,add);
}