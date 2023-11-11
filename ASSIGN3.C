/* WAP to calculate prize of a product, input Total Bill,
   quantities of a product*/
main()
{
   float total_bill,quantity,prize;
   clrscr();
   printf("Enter the amount of bill and quantites");
   scanf("%f%f",&total_bill,&quantity);
   prize=total_bill/quantity;
   clrscr();
   printf("\n Sum of total bill: %.2f",total_bill);
   printf("/-Rs.\nTotal number of quantites:%.0f",quantity);
   printf("\n\nThe prize of a single product:%2f",prize);
   printf("/-Rs.\n");
getch();
}
