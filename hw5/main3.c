#include <stdio.h>

int main()
{
 int c;
 for(c = 1; c <= 72; ++c){
     int i = (c-1)/9+2;
     int j =(c-1)%9+1;
     printf("%d*%d=%d\t", i, j, i*j);
 }
 printf("\n");
    return 0;
}
