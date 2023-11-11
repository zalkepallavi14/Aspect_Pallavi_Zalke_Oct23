/* WAP to find the biggest of three numbers using
   logical operator(AND Operator)*/
main()
{
  int a,b,c,max;
  clrscr();
  printf("\n Enter three no.s:");
  scanf("%d%d%d",&a,&b,&c);
  if(a>b && a>c)
    max=a;
  else if(b>a && b>c)
    max=b;
  else
    max=c;
  printf("\n Biggest value is: %d",max);
getch();
}
