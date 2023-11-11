/* WAP to calculate total bill of a product with 10% discount
   input product Rate, product quantity.*/
main()
{
  int prize,quantity;
  float discount,bill,fbill;
  clrscr();
  printf("Enter Rate of product     :");
  scanf("%d",&prize);
  printf("Enter quantity of product :");
  scanf("%d",&quantity);
  bill=prize*quantity;
  discount=(bill*10)/100;
  fbill=bill-discount;
  clrscr();
  printf("\n Product Rate     : %d",prize);
  printf("\n Product Quantity : %d",quantity);
  printf("\n Total Bill       : %2f",bill);
  printf("\n Discount 10 per  : %2f",discount);
  printf("\n Balance Bill     : %2f",fbill);
  getch();
}

