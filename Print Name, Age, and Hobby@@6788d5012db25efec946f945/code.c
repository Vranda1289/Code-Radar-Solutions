#include <stdio.h>

int main() {
    char a[20],c[20];
    int b;
    scanf("%s%s",&a,&c);
    printf("Name: %s\n",a);
    scanf("%d",&b);
    printf("Age: %d\n",b);
    printf("Hobby: %s\n",c);
    return 0;
}