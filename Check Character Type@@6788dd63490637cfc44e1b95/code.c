#include <stdio.h>

int main() {
    char a;
    scanf("%c",a);
    if(a=='a'||a=='A'||a=='e'||a=='E'||a=='I'||a=='i'||a=='o'||a=='O'||a=='u'||a=='U'){
        printf("Vowel");
    }
    else if((a>='a' && a<='z')||(a>='A' && a<='Z')){
        printf("Consonant");
    }
    else{
        printf("Digit");
    }
    return 0;
}