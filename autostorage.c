#include<stdio.h>
//default storage class for all variables
//storage class :local
//default value: garbage
//scope : local(inside the block)
//lifetime : local
//linkage : no linkage
void fun(int I)
{
	auto int i;     //auto name is just for reference it allready has auto  storage class
	auto int j=28;
	int k=45;    //this is also auto variable
	printf("scope of auto variable starts from here in fun\n");
	printf("\nDefault value of uninitialized auto variable is %d\n",i);
	printf("\nScope of auto variable ends here in function\n");
	
}
int main()
{
	//to access auto variable outside its scope is not allowed
	//printf("%d",i);
	fun(10);
	
   
   
	
	
	return 0;
}