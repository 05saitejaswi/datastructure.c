/*searching is a process of finding an element within the list of element sorted in any order or randomly.*/

#include<stdio.h>
void main()
{
int a[10],n,i,loc=0,iteam;
printf("how many element");
scanf("%d",&n);
printf("enter array");
for(i=0;i<n;i++);
{
scanf("%d",&a[i]);
}
printf("enter elemnt to be searched");
scanf("%d",&iteam);
printf("linear search");
for(i=0;i<n;i++)
{
if(a[i]=iteam)
   {
    loc=i++;
    break;
    }
 }
  if(loc>0)
  printf("search successfully,iteam found at%d pos",loc);
  else
  printf("search is unsuccessful");
  }
  
  
