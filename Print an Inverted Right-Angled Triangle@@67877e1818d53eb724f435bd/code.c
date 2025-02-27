#include <stdio.h>
int main()
{
int r,c,row,column;
scanf("%d",&row);
for(r=row; r>=1; r--){
    for(c=1; c<=r; c++ ){
        printf("* ");
    }
    printf("\n");
}


  return 0;

}
