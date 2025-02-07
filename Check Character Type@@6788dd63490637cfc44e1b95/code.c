#include <stdio.h>

int main() {
    char a;
    scanf("%c",a);
    if(a=='a'||'A'||'e'||'E'||'I'||'i'||'o'||'O'||'u'||'U'){
        printf("Vowel");
    }
    else if(a!='a'||'A'||'e'||'E'||'I'||'i'||'o'||'O'||'u'||'U'){
        printf("Consonent")
    }
    return 0;
}