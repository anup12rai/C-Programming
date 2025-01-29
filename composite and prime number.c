// to find prime and composite number
#include<stdio.h>

int main()
{
    int wwe,count=0,i;

    printf("Enter the number: ");
    scanf("%d",&wwe);

     for(i=1;i<=wwe;i++)

     if(wwe%i==0)
     {
        count++;
     }

     if(count==2)
     {
        printf("The prime number");

     }
     else
     {
        printf("The composite number");
     }

}