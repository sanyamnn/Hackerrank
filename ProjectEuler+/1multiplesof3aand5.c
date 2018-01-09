/*https://www.hackerrank.com/contests/projecteuler/challenges/euler001/copy-from/1304894398
This problem is a programming version of Problem 1 from projecteuler.net

If we list all the natural numbers below  that are multiples of  or , we get  and . The sum of these multiples is .

Find the sum of all the multiples of  or  below .

Input Format

First line contains  that denotes the number of test cases. This is followed by  lines, each containing an integer, .

Constraints

Output Format

For each test case, print an integer that denotes the sum of all the multiples of  or  below .

Sample Input 0

2
10
100
Sample Output 0

23
2318
Explanation 0

For , if we list all the natural numbers below  that are multiples of  or , we get  and . The sum of these multiples is .

Similarly for , we get .*/
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int main(){
long T;
scanf("%ld", &T);
for(int i = 0; i < T; i++)
    {
    long N,p;
    scanf("%ld\n", &N);
    unsigned long long sum = 0;
    p = (N-1)/3;
    sum = ((3*p*(p+1))/2);

    p = (N-1)/5;
    sum = sum + ((5*p*(p+1))/2);

    p = (N-1)/15;
    sum = sum - ((15*p*(p+1))/2);
    printf("%lld\n", sum);
    }
/* Enter your code here. Read input from STDIN. Print output to STDOUT */    
return 0;
}
