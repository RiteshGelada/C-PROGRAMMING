
/*
  int main(void)
 { 
   char ch = 'Z';
   printf("character value = %c ASCII value of ch = %d",ch,ch);
   printf("\n%c=%d",ch,ch);




    return 0;
 }
//character data type : 1 byte
 //range is from 0 to 255 in character data type
 //ASCII - AMERICAN STANDARD CODE FOR INFORMATION INTERCHANGE (0 TO 255)
 // EVEREY CHARACTER HAS GIVEN A SPECIFIED NUMERIC CONSTANT
// A to Z 65-90       A=65,B=66....
// a TO z  97-122     a=97,b=98...
// 0 to 9 48 TO 56    0=48,1=49...
/*
  int main(void)
{
  char ch = 'A';
  printf("character value = %c",ch);
  printf("\nsize of ch variable = %d",sizeof(ch));
  printf("\nsize of character data type = %d",sizeof(char));



 return 0;
}
/*
  int main(void)
  {
       double d = 9.8;
       printf("size of double data type = %d",sizeof(double));
       printf("\nsize of d variable = %d",sizeof(d));
       printf("\nsize of any decimal number directly passes to sizeof() : %d",sizeof(7.89));


   return 0 ;
}
/*
int main(void)
{
  float f_val = 7.5;
  printf("value = %f",f_val);
  printf("\nsize of f_val = %d",sizeof(f_val));
  printf("\nsize of float data type = %d",sizeof(float));
  printf("\nsize of any decimal number = %d",sizeof(2.5));
        // if we pass any decimal number directly inside sizeof() 
        // then it is always considered as double value i.e 8 bytes
  printf("\nsize of any decimal number = %d",sizeof(2.34f));    
  return 0;

}
/*
int main(void)
{
   int num = 50;
   printf("Number = %d",num);
   //size of()
   printf("\nsize of num variable = %d",sizeof(num));
   printf("\nsize of integer = %d ",sizeof(int));
   printf("\nsize of any whole number = %d",sizeof(4000)); 


  return 0;
}   
*/