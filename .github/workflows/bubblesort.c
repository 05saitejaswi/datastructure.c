#include<stdio.h>
#include<conio.h>
void main()
{
int a[5],i,j,n,temp;
clrscr();
printf("enter the size of arrsy");
scanf("%d",&n);
printf("enter the element");
for(i=0;i<=n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}}}
printf("sorted array is ");
for(i=0;i<n;i++)
printf("%d\n",a[i]);
getch();
}

