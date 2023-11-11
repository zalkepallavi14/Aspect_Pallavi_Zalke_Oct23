/* WAP to calculate Total score marks, percentage of a student
   input score marks of English,maths and science.*/
main()
{
  float eng,math,sci,total_marks,percentage;
  clrscr();
  printf("Enter the marks of 3 subject:");


  printf("\nEnter the marks of English:");
  scanf("%f",&eng);
  printf("Enter the marks of Math:");
  scanf("%f",&math);
  printf("Enter the marks of Science:");
  scanf("%f",&sci);
  total_marks=eng+math+sci;
  percentage=total_marks/300*100;
  clrscr();

  printf("\n Marks in English subject :%.2f",eng);
  printf("\n Marks in Math subject    :%.2f",math);
  printf("\n Marks in Math subject    :%.2f",sci);
  printf("\n\n Sum of all 3 subject   :%.2f",total_marks);
  printf("\n\n Percentage             :%.2f",percentage);
  printf("%.\n");
getch();
}

