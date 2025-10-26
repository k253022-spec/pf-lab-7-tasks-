#include<stdio.h>
int main(){
    char str[100];
    printf("Enter a string:");
    scanf("%[^0-9]", str);
    printf("String without numbers:%s",str);
    return 0;
}
