//program 2 :create an array of size 10,input values and display sum and average

#include<stdio.h>
#include<conio.h>

void main()
{
    in a[10],i,sum = o;
    float avg;
    clrscr();

    printf("enter 10 elements:\");
    for(i=0; i<10; i++)
    {
      scanf("%d",&a[i]);
      sum = sum + a[i];
    }
    avg = sum /10.0;
    printf("\nsum = %d", sum);
    printf("\naverage = %.2f",avg);
    getch();
 }