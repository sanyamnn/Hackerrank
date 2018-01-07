/*https://www.hackerrank.com/challenges/mini-max-sum/problem
Given five positive integers, find the minimum and maximum values that can be calculated by summing exactly four of the five integers. Then print the respective minimum and maximum values as a single line of two space-separated long integers.

Input Format

A single line of five space-separated integers.

Constraints

Each integer is in the inclusive range .
Output Format

Print two space-separated long integers denoting the respective minimum and maximum values that can be calculated by summing exactly four of the five integers. (The output can be greater than 32 bit integer.)

Sample Input

1 2 3 4 5
Sample Output

10 14
Explanation

Our initial numbers are , , , , and . We can calculate the following sums using four of the five integers:

If we sum everything except , our sum is .
If we sum everything except , our sum is .
If we sum everything except , our sum is .
If we sum everything except , our sum is .
If we sum everything except , our sum is .
As you can see, the minimal sum is  and the maximal sum is . Thus, we print these minimal and maximal sums as two space-separated integers on a new line.

Hints: Beware of integer overflow! Use 64-bit Integer.*/
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int main() {
    long *arr = malloc(sizeof(long) * 5),greatest=0,smallest=2147483647,sumLarge=0,sumSmall=0,sum=0;
    for (int arr_i = 0; arr_i < 5; arr_i++) {
       scanf("%ld",&arr[arr_i]);
        if(arr[arr_i]>greatest){
            greatest=arr[arr_i];
        }
        if(arr[arr_i]<smallest){
            smallest=arr[arr_i];
        }
        sum=sum+arr[arr_i];
    }
    sumLarge=sum-smallest;
    sumSmall=sum-greatest;
    printf("%ld %ld",sumSmall,sumLarge);
    return 0;
}

