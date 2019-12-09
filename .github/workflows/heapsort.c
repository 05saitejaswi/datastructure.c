#include<stdio.h>
#inclide<conio.h>
void make(int[]);
void down(int[],int);
void main()
{
clrscr();
int heap[30],i,n,last,temp;
printf("enter the total number of element want to sort\n");
scanf("%d",n]);
printf("\n enter element");
for(i=1;i<n;i++)
scanf(%d",heap[i]);
heap[0]=n;
make(heap);
while(heap[0]>1)
{
last=heap[0];
team=heap[1];
heap[1]=heap[last];
heap[last]=temp;
heap[0]--;
down(heap,1);
}
printf("%d",heap[i]);
getch();
}
void make(int heap[]0
{
int i,n;
n=heap[0];
for(i=n/2;i>=1;i--)
down(heap,i);
}
void down(int heap[],int i)
{
int j,temp,n,flag=1;
n=heap[0];
while(2*i<=n && flag==1)
j=j+1;
if(heap[i]>heap[j])
flag=0;
else
{
temp=heap[i];
heap[i]=heap[j];
heap[j]=temp;
i=j;
}
}
}

