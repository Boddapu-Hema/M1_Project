#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
{   

    float bill, units;
    printf("Enter the units consumed: ");
    scanf("%f", &units);
   
    if(units <=30 && units >= 0)
    {
        bill = units* 3.25; //3.25 is rupees
    }
    else if(units >= 31 && units <= 100)
    {
        bill = units * 4.70;
    }
    else if(units >= 101 && units <= 200)
    {
        bill= units * 6.25;
    }
    else
    {
        bill = units * 7.30;
    }

   
    printf("In Urban, your electricity bill is: %f\n", bill);
    printf("Units you consumed per month: %f\n", units);
}

{
    float bill, units;
    printf("Enter the units consumed: ");
    scanf("%f", &units);
   
    if(units <=30 && units >= 0)
    {
        bill = units * 3.15; //3.25 is rupees
    }
    else if(units >= 31 && units <= 100)
    {
        bill = units * 4.40;
    }
    else if(units >= 101 && units <= 200)
    {
        bill = units * 5.95;
    }
    else
    {
        bill = units * 6.80;
    }
      
      printf("In Rural, your electricity bill is: %f\n", bill);
      printf("Units you consumed per month: %f\n", units);
}
return 0;
}
