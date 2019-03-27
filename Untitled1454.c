
#include <stdio.h>
int main() {
	int no1, no2, no3;
	scanf("%d", &no1);
	scanf("%d", &no2);
	scanf("%d", &no3);
	
	if(no1>no2&&no1<no3)
    {
      printf("%d",no1);}
  if(no2>no1&&no2<no3){
    printf("%d",no2);}
if(no3>no1&&no3<no2){
  printf("%d",no3);}
  return 0;
}
