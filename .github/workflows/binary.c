#include<stdio.h>
3include<conio.h>
void main()
{
int c,first,last,middle,n.search,array[100];
clrscr();
printf("enter number of elements");
scanf("%d",&n);
printf("enter %d integers\n",n);
for(c=0;c<n;c++)
scanf("%d",&array[c]);
printf("enter the values to be find\n");
scanf("%d",search);
first =0;
last = n-1;
middle = (first+last)/2;
while(first<= last)
{
if(array[middle]<search)
   first = middle+1;
   elseif(array[middle] ==search)
   {
   printf("%d found at location %d\n",search,middle+1);
   break;
   }
   else
   last=middle-1;
   middle =(first+last)/2;
   }
   if(first>last)
   printf("not found %d",search);
   getch();
   }
   
