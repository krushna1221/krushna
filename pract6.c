// C program to demonstrate Basic Euclidean Algorithm
#include <stdio.h>

// Function to return gcd of a and b 
int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b%a, a);
}
 
 
// Driver program to test above function
int main()
{
    int a,b,t; 
    printf("Enter two number to find GCD");
    scanf("%d%d",&a,&b);
    printf("GCD(%d, %d) = %dn", a, b, gcd(a, b));
    
    return 0;
}
