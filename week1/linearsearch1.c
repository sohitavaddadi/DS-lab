#include<stdio.h>
int linear_search(int[],int,int);
int main()
{
int a[10],n,key,pos,i;
printf("enter size of a array:");
scanf("%d",&n);
printf("enter the elements");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("enter a element to be searched:");
scanf("%d",&key);
pos=linear_search(a,n,key);
if(pos == -1)
{
 printf("element not found");
 }
 else{
 printf("element found at %d position",pos);
 }
 }
 int linear_search(int a[],int n,int kepy)
 {
 int i;
 for (i=0;i<n;i++)
 {
 if (key == a[i])
 { return i ;
 }
 }
 return -1;
 }
 // output//
 enter size of a array:3
enter the elements1
2
4
enter a element to be searched:2
element found at 1 position
Process returned 0 (0x0)   execution time : 5.534 s
Press any key to continue.

// 2 output//
enter size of a array:4
enter the elements1
2
3
4
enter a element to be searched:5
element not found
Process returned 0 (0x0)   execution time : 6.743 s
