#include <stdio.h>
int main()
{
int r,c,row,column;
scanf("%d",&row);
row=column-1;
for(r=1; r<=row; r++){
    for(c=1; c<=column; c++ ){
        printf("*");
    }
    printf("\n");
}


  return 0;

}