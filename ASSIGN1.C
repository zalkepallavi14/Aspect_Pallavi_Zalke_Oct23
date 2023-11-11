/* WAP to accept 2 integer numbers from user & perform addition*/
main()
{
 int num1,num2,res;
 clrscr();
 printf("Enter two number:");
 scanf("%d%d",&num1,&num2);
 res=num1+num2;
 clrscr();
 printf("\n First number is:%d",num1);
 printf("\n Second number is:%d",num2);
 printf("\n Addition of two number is:%d",res);
 getch();
}
