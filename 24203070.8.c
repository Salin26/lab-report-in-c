#include<stdio.h>
int main()
{
    int i=1, sum=0;
   while(i<=1000)
   {
       if(i % 11 == 0 && i % 22 != 0)
       {

        sum+=i;
        }
        i++;
   }

   printf("%d",sum);
   return 0;

}
