/* WAP to Greater number among 5 integers numbers*/
main()
{
  int a,b,c,d,e;
  clrscr();
  printf("Enter the five integers number:");
  scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
  printf("\n Number 1: %d",a);
  printf("\n Number 2: %d",b);
  printf("\n Number 3: %d",c);
  printf("\n Number 4: %d",d);
  printf("\n Number 5: %d",e);
  if(a>b)
  {
    if(a>c)
    {
      if(a>d)
      {
	if(a>e)
	{
	  printf("\n First number is greater: %d",a);
	}
	else
	{
	  printf("\n Fifth number is greater: %d",e);
	}
	}
  else
  {
    if(d>e)
    {
      printf("\n\n Fourth number is greater: %d",d);
    }
    else
    {
      printf("\n\n Fifth number is greater: %d",e);
    }
    }
  }
  else
  {
    if(c>d)
    {
      if(c>e)
      {
	 printf("\n\n Third number is greater: %d",c);
      }
      else
      {
	printf("\n\n\n Fifth number is greater: %d",e);
      }
      }
    else
    {
      if(d>e)
      {
	printf("\n\n\n Fourth number is greater: %d",d);
      }
      else
      {
	printf("\n\n\n Fifth number is greater: %d",e);
      }
      }
    }
    }
    else
    {
      if(b>c)
      {
      if(b>d)
      {
      if(b>e)
      {
	printf("\n\n\n Second number is greater: %d",b);
      }
      else
      {
	printf("\n\n\n Fifth number is greater: %d",e);
      }
      }
      else
      {
	if(d>e)
	{
	   printf("\n\n\n Fourth number is greater: %d",d);
	}
	else
	{
	   printf("\n\n\n Fifth number is greater: %d",e);
	}
      }
      }
      else
      {
	if(c>d)
	{
	  if(c>e)
	  {
	     printf("\n\n\n Third number is greater: %d",c);
	  }
	  else
	  {
	    printf("\n\n\n Fifth number is greater: %d",e);
	  }
	  }
	  else
	  {
	    if(d>e)
	    {
	       printf("\n\n\n Fourth number is greater: %d",d);
	    }
	    else
	    {
	      printf("\n\n\n Fifth number is greater: %d",e);
	    }
	    }
	  }
	}
getch();
}


