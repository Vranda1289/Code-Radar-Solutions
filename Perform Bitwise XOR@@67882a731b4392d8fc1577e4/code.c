// when both the result are same then xor gives "0" and when they are differnt xor gives "1".....


#include <stdio.h>

int main() {
    int a,b,result;
    scanf("%d%d",&a,&b);
    result=a^b;
    printf("%d",result);
    return 0;
}