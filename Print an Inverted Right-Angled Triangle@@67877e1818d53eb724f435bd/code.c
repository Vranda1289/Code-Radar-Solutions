#include <stdio.h>
int main()
{
int r,c,row,column;
scanf("%d%d",&row,&column);
for(r=1; r<=row; r++){
    for(c=1; c<=column; c++ ){
        printf("*",r-c);
    }
    printf("\n");
}


  return 0;

}