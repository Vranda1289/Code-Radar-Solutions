#include <stdio.h>

int main() {
    int a,b;
    char c;
    scanf("%d%d",&a,&b);
    scanf("%c",&c);
    if(c=='+'){
        printf("%d\n",a+b);
    }
    else if(c=='-'){
        printf("%d\n",a-b);
    }
    else if(c=='*'){
        printf("%d\n",a*b);
    }
    else if(c=='/'){
        printf("%d\n",a/b);
    }
    else {
        printf("Error:Invalid operator\n");
    }
    return 0;
}