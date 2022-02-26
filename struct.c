#include <stdio.h>
//structure declaration 
struct Demo
{
     int iNo;     
     float fValue;
     int iValue;

};
int main()
{
    //structure object creation
  struct Demo obj;
  //object initialization
  obj.iNo = 11;
  obj.fValue = 10.11;
  obj.iValue = 21;
  printf("%d\n",obj.iValue); //21
  printf("%d\n",sizeof(obj));
    return 0;
}