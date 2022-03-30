#include <stdio.h>
#define PETLA(x,n)\
for(x=0;x<n;x++)
int main(void) {
  printf("%d",PETLA(2,4));
  return 0;
}