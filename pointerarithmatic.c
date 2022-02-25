#include<stdio.h>
int main()
{
 int Arr[5]={10,20,30,40,50};
 
 int*p=&(Arr[0]);
 int*q=&(Arr[4]);
 printf("no of elements between p and q %d\n",q-p);
 
 printf("value of p %d:\n",p);
 printf("value of q%d:\n",q);
 
 p=p+3;
 printf("new value of p %d\n",p);
 
 q=q-3;
 printf("new value of q is %d:\n",q);
    
    return 0;
}