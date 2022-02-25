#include<stdio.h>
int main()
{
  int iValue =11;
  char cValue='A';
  float fValue=10.11;
  double dValue=20.11;
  
  
  void*ptr= NULL;
  ptr=&iValue;
  printf("%d",*(int*)ptr);

    ptr=NULL;
  ptr=&fValue;
  printf("%f\n",*(float*)ptr);
  
  ptr=NULL;
  ptr=&cValue;
  printf("%c\n",*(char*)ptr);

  ptr=NULL;
  ptr=&fValue;
  printf("%f\n",*(float*)ptr);
 
    return 0;
}