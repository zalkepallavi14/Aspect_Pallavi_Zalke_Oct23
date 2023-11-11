/* WAP to Greater number among 4 integers numbers*/
main()
{
  int a,b,c,d;
  clrscr();
  printf("Enter the four integers number:");
  scanf("%d%d%d%d",&a,&b,&c,&d);
  printf("\n Number 1: %d",a);
  printf("\n Number 2: %d",b);
  printf("\n Number 3: %d",c);
  printf("\n Number 4: %d",d);
  if(a>b)
  {
    if(a>c)
    {
      if(a>d)
      {
	printf("\n Number 1 is greatest among all integers: %d",a);
      }
      else
      {
	printf("\n Number 4 is greatest among all integers: %d",d);
      }
    }
  else
  {
    if(c>d)
    {
      printf("\n\n Number 3 is greatest among all integers: %d",c);
    }
    else
    {
      printf("\n\n Number 4 is greatest among all integers: %d",d);
    }
  }
  }
  else
  {
    if(b>c)
    {
      if(b>d)
      {
	 printf("\n\n\n Number 2 is greatest among all integers: %d",b);
      }
      else
      {
	printf("\n\n\n Number 4 is greatest among all integers: %d",d);
      }
    }
    else
    {
      if(c>d)
      {
	printf("\n\n\n Number 3 is greatest among all integers: %d",c);
      }
      else
      {
	printf("\n\n\n Number 3 is greatest among all integers: %d",d);
      }
    }
  }
getch();
}









