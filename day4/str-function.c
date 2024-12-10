#include<stdio.h>
#include<string.h>
int main(){
    char f_name[20], l_name[20], name[50];
    printf("enter your first name:");
    scanf("%s", f_name);
    printf("enter your last name:");
    scanf("%s", l_name);
    //strcpy=>string copy->strcpy(resulting,orgstr
    strcpy(name, f_name);
    //strcat=>string concatenation->strcat(result_str_org_str)
    strcat(name, l_name);
    printf("full name: %s\n",name);//using string handling functions
    printf("full name: %s %s", f_name, l_name);
    printf("full name in lowercase:%s",strlwr(name));
    //strupr -> string upper-> converts the given string to upper case
    printf("full name in lowercase:%s\n",strlwr(name));
    //strlwr->string lower -> converts the given string to lower case
    printf("full name is reversed:%s",strrev(name));
    //strrev ->string reverse ->recerse the given string
}
    
