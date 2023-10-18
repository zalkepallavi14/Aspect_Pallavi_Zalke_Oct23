 /* WAP to calculate Total score marks, percentage of a student
 input score marks of English, Maths, Science*/

main()
 {
 int eng, math, sci, tot;
 float percent;
 clrscr();
 printf("Enter English Marks :");
 scanf("%d",&eng);
 printf("Enter Maths Marks   :");
 scanf("%d",&math);
 printf("Enter Science Marks :");
 scanf("%d",&sci);
 tot=eng+math+sci;
 percent=tot/3;
 clrscr();
 printf("\nEnglish         :%d",eng);
 printf("\nMathematics     :%d",math);
 printf("\nScience         :%d",sci);
 printf("\nTotal Score     :%d",tot);
 printf("\nPercentage      :%d",percent);
 getch();
 }



