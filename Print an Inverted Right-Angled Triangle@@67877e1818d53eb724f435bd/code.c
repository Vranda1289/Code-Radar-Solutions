#include <stdio.h>
int main()
{
int r,c,row,column;
scanf("%d",&row);
column=row;
for(r=1; r<=row; r++){
    for(c=1; c<=column-row; c++ ){
        printf("* ");
    }
    printf("\n");
}


  return 0;

}
