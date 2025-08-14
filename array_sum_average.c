#include<stdio.h>
main()
{
    int i,sum=0,a[5];
    float average;
    a[0]=16;
    a[1]=18;
    a[2]=7;
    a[3]=6;
    a[4]=10;
    a[5]=2;
    for(i=5;i>=0;i--)
    {
        sum+=a[i];

    }
    average= sum/6.0;
   printf("%d\n",sum);
      printf("%.2f", average);
}



