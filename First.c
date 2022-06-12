
#include <stdio.h>

//1  8
//2  9
// 3  10
// 4   11
// 5   12
int main()
{
  auto int iStd = 0;

  printf("Enter your Std :\n");
  scanf("%d",&iStd);


  if((iStd == 1 ))
  {
      printf("Your Exam  is at 8 \n");
  }
  else if ((iStd == 2 ))
  {
        printf("YourExamis at :9 \n");
  }
  else if (iStd  == 3)
  {
        printf("Your Exam  is at :10 \n");
  }
    else if (iStd  == 4)
  {
        printf("Your Exam  is at :11 \n");
  }
    else if (iStd  == 5)
  {
        printf("Your Exam  is at :12 \n");
  }
  else
  {
      printf("Invalid Standard \n");
  }
    return 0;
}
