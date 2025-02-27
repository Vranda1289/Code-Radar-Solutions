#include <stdio.h>
int main()
{
int r,c,row,column;
scanf("%d",&row);
column=row;
for(r=1; r<=row+1; r++){
    for(c=1; c<=column; c++ ){
        printf("* ");
    }
    printf("\n");
}


  return 0;

}
