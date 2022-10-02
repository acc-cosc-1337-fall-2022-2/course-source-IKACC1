//add include statements
#include <iostream>
#include <dna.h>
//add function(s) code here
int factorial(int num)
{
int c=num;
int result = 1;
while (c >0)
{
    result = result*c;
    c--;
}
return result;
}


int gcd(int num1, int num2)
{
if (num1 == num2)
    {return num1;
    }
else{
    while (num1!=num2)
        if (num1<num2)
            {
                int num3=num1;
                num1=num2;
                num2=num3;

            }
        else num1=num1-num2;
    }
    return num1;
}   

