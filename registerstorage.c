#include<stdio.h>
/*
 storage class : register
 lifetime :local
 default value: garbage
scope  : local(inside the bloack)
memory allocated : cpu registers
 linkage : no linkage
*/
/*
 the register storage clas specifier indicates to the compilert hat the object should be stored in a machine register
 This storage class specifier is typically specifier for heavily used variale such as loop conrol variable
 in the hopes of enhancing performance by minimizing access time
 If the compiler does not allocate machine register for registerd object, the object is treated as having the storage class as auto storage class.
 */
 //register storage class is a request whereas auto storage class is default
 //if the registers are available then our request is accepted
 //we can not declare register storage class in global scope
 void fun()
 {
	 register int i;
	 //it is not allowed to create pointer to register variable in c
	 // int*p=&i;  //it is allowed in c++
	 //any variable stored in CPU register are not depend on capacity microprocessor
	 //if the microprocessor has 16 bit register it can not hold a float value or a double value 
	 // which requires 4 and 8 bytes respectively
	 //if we use register storage class for float, double we wont get any error 
	 //beause compiler treat it as default storage class i.e AUTO
	 
	 
	 register double d=3.12;
	 	 
 }
 
  void gun()
  {
	//this is the better use of register storage class
register int i;
for(i=10; i>=0;--i)	
{
	printf("%d",i);
      }
	  
  }
  int main()
  {
	  fun();
	  gun();
	  
	  
	  return 0;
  }