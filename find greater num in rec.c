/*
to find the number greater in 5 number
*/
#include<stdio.h>
#include<string.h>
int main()
{
char an[5];
int a,b,i,j;
printf("Enter any 5 number: ");
for (b=1;b<=5;b++)
scanf("%s",&an[b]);

for (i=1;i<=5;i++)
{
    for (j=1;j<=5;j++)

    if(strcmp(an[i]>an[j]))
    {
        a=an[i];
        an[i]=an[j];
        an[j]=a;
    }
}
for (i=1;i<=5;i++)
printf("%d",an[i]);


}