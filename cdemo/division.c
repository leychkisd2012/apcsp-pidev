#include <stdio.h>
int main()
{

int div;

scanf("%d", &div);

for  (int i = 0; i < 100; i++){
if  ((i % div) == 0){
printf ("%d\n", i);
}
}
}
