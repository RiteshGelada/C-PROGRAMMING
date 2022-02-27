
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
    //struct demo *p=&obj;
    
    struct Demo *p= NULL;
    p = &obj;
 
 
   
    printf(" Adress of object is : %d\n",&obj);
    
    return 0;
}