#include <stdio.h>
#include <stdlib.h>

int whicOneIsBiggger(int a,int b);
int main()
{
    int a,b,k;

  printf("Please enter a different two number:");
  scanf("%d%d",&a,&b);

  k=whicOneIsBiggger(a,b);
  printf("the maximum value is : %d",k);
}

int whicOneIsBiggger(int a,int b){
if(a>b){
    return a;
}
else{
    return b;
}



}
