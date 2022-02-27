#include <stdio.h>
struct Demo
{
  int iNo;
  float fValue;
  int iValue;
  double dValue;
};
int main() 
{
    struct Demo obj;
    obj.iNo = 11;
    obj.fValue = 10.11;
    obj.iValue = 21;
    obj.dValue = 20.5;
 
    printf("%d\n",obj.iValue);
    printf("%d\n",sizeof(obj));
    
    return 0;
}