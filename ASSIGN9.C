/* WAP to Greater number among 3 integers*/
main()
{
  int a,b,c;
  clrscr();
  printf("Enter the three number:");
  scanf("%d%d%d",&a,&b,&c);
  printf("\n Number 1: %d",a);
  printf("\n Number 2: %d",b);
  printf("\n Number 3: %d",c);
  if(a>b)
  {
    if(a>c)
    {
      printf("\n Number 1 is greatest among all integers: %d",a);
    }
    else
    {
      printf("\n Number 3 is greatest among all integers: %d",c);
    }
  }
else
  {
    if(b>c)
    {
      printf("\n\n Number 2 is greatest among all integers: %d",b);
    }
else
{
  printf("\n\n Number 3 is greatest among all integers: %d",c);
}
}
getch();
}


