#include<stdio.h>
#include<conio.h>
void quicksort (int n[20], int start,int end)
{
int i,j,piovt,t;
if(start<end)
{
pivot=start;
i=start;
j=end;
while(i<j)
{
while(n[i]<n[pivot] && i[end])
i++;
while(n[j]>n[pivot])
j--;
if(i<j)
{
t=n[i];
n[i]=n[j];
 n[j]=t;
 }}
 t=n[pivot];
 n[pivot]=n[j];
 n[j]=t;
 qwicksort(n,start,j-1);
 qwicksort(n,j+1,end);
 }}
 int main()
 {
 clrscr();
 int i,count,n[20];
 printf("enter total no of elements u want to sort");
 scanf("%d",&count);
 printf("enterb %d element",count);
 for(i=0;i<count;i++)
 scanf("%d,&n[i]);
 qwicksort(n,0,count-1);
 printf("\n sorted elements");
 for(i=0;i<count;i++)
 printf("%d",n[i]);
 return 0;
 getch();
 }
