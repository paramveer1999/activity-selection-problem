#include<stdio.h>
#include<conio.h>
void swap(int*x,int*y)
{
int t;
t=*x;
*x=*y;
*y=t;
}
void main()
{

int s[10],f[10],i,k,j,n,a[10];
clrscr();
printf("enter the number of activities");
scanf("%d",&n);
printf("enter start and finish time");
for(i=0;i<n;i++)
{
a[i]=i+1;
printf("a[%d]",a[i]);
scanf("%d",&s[i]);
scanf("%d",&f[i]);
}
for(i=0;i<n;i++)
{
for(j=0;j<n-i-1;j++)
{
if(f[j]>f[j+1])
{
swap(&f[j],&f[j+1]);
swap(&s[j],&s[j+1]);
}}}
printf("activities are");
printf("a[%d]",a[0]);
k=0;
for(i=0;i<n;i++)
{
if(s[i]>=f[k])
{
printf("a[%d]",a[i]);
k=i;
}}
getch();
}
