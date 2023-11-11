/* WAP to calculate MSEB Electricity Bill of a customer
   input customer No, old reading, new reading, unit rate 5.00
   per unit.*/
main()
{
  int custId,oldrd,newrd,curunt,untrt=5;
  float totbill;
  clrscr();
  printf("Enter Customer ID  :");
  scanf("%d",&custId);
  printf("Enter Old Reading  :");
  scanf("%d",&oldrd);
  printf("Enter New Reading  :");
  scanf("%d",&newrd);
  curunt=newrd-oldrd;
  totbill=curunt*untrt;
  clrscr();

  printf("\n Customer ID      : %d",custId);
  printf("\n Old Reading      : %d",oldrd);
  printf("\n New Reading      : %d",newrd);
  printf("\n Unit Rate        : %d",untrt);
  printf("\n Total Bill       : %.2f",totbill);
  getch();
}



