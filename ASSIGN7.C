/* WAP to calculate EMI(Every Month Installment) of Loan
   Amount, input Loan Amount, Rate of interest, Duration(year)*/
main()
{
  float lnamt, roi, duryr, intr, totint,repay,emi;
  clrscr();
  printf("Enter Loan Amount      :");
  scanf("%f",&lnamt);
  printf("Enter Interest Rate    :");
  scanf("%f",&roi);
  printf("Enter Duration of year :");
  scanf("%f",&duryr);
  intr=(lnamt*roi)/100;
  totint=intr*duryr;
  repay=lnamt+totint;
  emi=(repay/(duryr*12));
  clrscr();
  printf("\n Loan Amount          : %2f",lnamt);
  printf("\n Interest Rate        : %2f",roi);
  printf("\n Interest of year     : %2f",intr);
  printf("\n Total Interest       : %2f",totint);
  printf("\n Total Refund Amount  : %2f",repay);
  printf("\n Monthly Installment  : %2f",emi);
  getch();
}

