/*https://www.hackerrank.com/contests/projecteuler/challenges/euler003/copy-from/1304895543
This problem is a programming version of Problem 3 from projecteuler.net

The prime factors of  are  and .

What is the largest prime factor of a given number ?

Input Format

First line contains , the number of test cases. This is followed by  lines each containing an integer .

Constraints

Output Format

For each test case, display the largest prime factor of .

Sample Input 0

2
10
17
Sample Output 0

5
17
Explanation 0

Prime factors of  are , largest is .
Prime factor of  is  itself, hence largest is .

*/
# include <stdio.h>
# include <math.h>
long long int ans;
void primeFactors(long long int n)
{	long long int i=0,j;
    // Print the number of 2s that divide n
    while (n%2 == 0)
    {
        n = n/2;
    }
    if(n==1)
     {
        ans=2;
        return;
    }
 
    // n must be odd at this point.  So we can skip one element (Note i = i +2)
    for (i = 3; i <= sqrt(n); i = i+2)
    {
        // While i divides n, print i and divide n
        while (n%i == 0)
        {
            n = n/i;
        }
    }
 
    // This condition is to handle the case whien n is a prime number
    // greater than 2
 if(n>2)
    ans=n;
 else
     ans=i-2;
}
 
/* Driver program to test above function */
int main()
{
    int t;
    long long int n;
    scanf("%d",&t);
    while(t--)
    {
    scanf("%lld",&n);
    primeFactors(n);
    printf("%lld\n",ans);
    }
 
    return 0;
}
