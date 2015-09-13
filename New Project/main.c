#include <stdio.h>

int gcd(int x, int y);


int main()
{
    
    int a, b;
    printf("Please enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("The greatest common denominator of %d and %d is %d", a, b, gcd(a, b));
    
    return 0;
}

int gcd(int m, int n)
{
    int remainder;
    for (; ;)
    {
        if (n == 0)
        {
            return m;
        }
        else
        {
            remainder = m % n;
            m = n;
            n = remainder;
        }
    }
   
    
  

    return 0;
}

