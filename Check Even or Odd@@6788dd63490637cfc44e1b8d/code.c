#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    if(a>=0 || a<0)(&& a%2==0){
        printf("Even");
    }
    else{
        printf("Odd");
    }
    return 0;
}