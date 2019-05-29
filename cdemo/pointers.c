#include <stdio.h>

int main()
{
  
  int a;
  int* ptrtoa;

  ptrtoa = &a;

  a = 5;
  printf("The value of a is %d\n", a);

  *ptrtoa = 6;
  printf("The value of a is %d\n", a);

  printf("The value of ptrtoa is %d\n", ptrtoa);
  printf("It stores the value %d\n", *ptrtoa);
  printf("The address of a is %d\n", &a);

  float d = 25.55;

  *ptrtoa = &d; 
  printf("The value of  d is %f\n", ptrtoa);
  printf("The address of d is %f\n", &d); 
  
  float e = 30.55;

  *ptrtoa = &e;

 printf("The value of e is %f\n", ptrtoa); 
 printf("the address of e is %f\n", &e); 
}
