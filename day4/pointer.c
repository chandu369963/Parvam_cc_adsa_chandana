#include<stdio.h>
int main(){
    int num=20;
    printf("the value of number: %d\n",num);
    printf("the adderss of number(%d): %p\n",num, &num);
    int* ptr=ptr= &num; //pointer variable-ptr
    printf("the address of pointer:%p\n",ptr);
    printf("the value of pointer: %d\n",*ptr);
    *ptr=30;
    printf("he updated value of number: %d\n",num);
}