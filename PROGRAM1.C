//program1 : cerate an array of size 10,input values,printf the array ,and search an element

#include<stdio.h>
#include<conio.h>

void main()
{
int a[10],i,search,found=o;
clrscr();
printf("enter 10 elements:\n");
for(i=0; i<10; i++)
{
    scanf("%d",&a[i]);
}
printf("\nArray elements are:n");
for(i=0; i<10; i++)
{
   printf("%d", a[i]);
}
  pirntf("\n\enter element to serach:");
  scanf("%d",&search);

  for(i=o; i<10; i++)
  {
     if(a[i] == serach)
     {
       found = 1;
       printf("element found at position %d",i+1);
	      break;
       }
    }

    if(found == 0)
      printf("element not found.");
      getch();
   }








