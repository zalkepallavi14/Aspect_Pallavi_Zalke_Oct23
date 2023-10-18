/* WAP to calculate Total Bill of a product with 10% discount
input product Rate, product Quantity*/
main()
 {
 int prz,qty;
 float dis,bill,fbill;
 clrscr();
 printf("Enter Rate of Product       :    ");
 scanf("%d",&prz);
 printf("Enter Quantity of product   :    ");
 scanf("%d",&qty);
 bill=prz*qty;
 dis=(bill*10)/100;
 fbill=bill-dis;
 clrscr();
 printf("\nProduct Rate      :%d",prz);
 printf("\nProduct Quantity  :%d",qty);
 printf("\nTotal Bill        :%2f",bill);
 printf("\nDiscount 10 per   :%2f",dis);
 printf("\nBalance Bill      :%2f",fbill);
 getch();
 }