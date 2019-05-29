#include <stdio.h>

int main()
{
int X = 0;
float a = 0 ;
 
int myFunction(float a)
{


int X = ( 3.14 * ( a *  a));

printf("%d\n", X);

}

for (float a = 3.5; a < 12.5; a++){ 

 myFunction(a);


}

}


