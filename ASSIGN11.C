/* WAP to perform the operation selected by the
   user (Using Nested if else)*/
main()
{
  int option,num1,num2;
  clrscr();
  printf("\n Operation Menu:");
  printf("\n Addition:");
  printf("\n Subtraction:");
  printf("\n Multiplication:");
  printf("\n Division:");
  printf("\n Modulus or floor division:");
  printf("\n Enter your choice:");
  scanf("%d",&option);
  if(option<=5)
  {
    printf("\n Enter two integer numbers:");
    scanf("%d%d",&num1,&num2);
    if(option==1)
    {
      printf("\n Addition: %d",num1+num2);
    }
    else
    {
      if(option==2)
      {
	printf("\n Subtraction: %d",num1-num2);
      }
      else
      {
	if(option==3)
	{
	  printf("\n Multiplication: %d",num1*num2);
	}
	else
	{
	  if(option==4)
	  {
	    printf("\n Division: %d",num1/num2);
	  }
	  else
	  {
	    printf("\n Modulus or floor division: %d",num1%num2);
	  }
	}
      }
    }
  }
  else
  {
      printf("\n Invalid option selected by you from the operation menu:");
  }
  getch();
}

