/* WAP to calculate MSEB Electricity Bill of a customer
input Customer No., old reading, New reading, unit rate 5.00 per unit.*/
main()
 {
 int custid,oldrd,newrd,cunt,untrt=5;
 float totbill;
 clrscr();
 printf("Enter Customer ID   :");
 scanf("%d",&custid);
 printf("Enter Old Reading   :");
 scanf("%d",&oldrd);
 printf("Enter New Reading   :");
 scanf("%d",&newrd);
 cunt=newrd-oldrd;
 totbill=cunt*untrt;
 clrscr();
 printf("\nCustomer ID      :%d",custid);
 printf("\nOld Reading      :%d",oldrd);
 printf("\nNew Reading      :%d",newrd);
 printf("\nUnit Rate        :%d",untrt);
 printf("\nTotal Bill       :%2f",totbill);
 getch();
 }
