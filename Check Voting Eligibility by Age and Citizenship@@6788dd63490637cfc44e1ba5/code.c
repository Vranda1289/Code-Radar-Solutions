#include <stdio.h>

int main() {
    int a,b;
    scanf("%d",&a);
    if(a>=18){
        printf("Eligible");
    }
    else{
        printf("Not Eligible");
    }
    scanf("%d",&b);
    if(b==1){
        printf("Citizen");
    }
    else{
        printf("Non-citizen");
    }
    return 0;
}