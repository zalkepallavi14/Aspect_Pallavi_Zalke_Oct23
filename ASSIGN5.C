/* WAP to calculate EMI (Every month instalment), of Loan Amount, input loan Amount,Rate of interest,Duration (year)*/
main()
 {
 float lnamt, roi, duryr, intr, totint,repay,emi;
 clrscr();
 printf("Enter Loan Amount      :");
 scanf("%f",&lnamt);
 printf("Enter interest Rate    :");
 scanf("%f",&roi);
 printf("Enter Duration Year    :");
 scanf("%f",&duryr);
 intr=(lnamt*roi)/100;
 totint=intr*duryr;
 repay=lnamt*totint;
 emi=(repay/(duryr*12));
 clrscr();
 printf("\nLoan Amount         :%2f",lnamt);
 printf("\nInterest Rate       :%2f",roi);
 printf("\nInterest of year    :%2f",intr);
 printf("\nTotal interest      :%2f",totint);
 printf("\nTotal Refund Amount :%2f",repay);
 printf("\nMonthly installment :%2f",emi);
 getch();
 }




