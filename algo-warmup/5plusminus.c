/*https://www.hackerrank.com/challenges/plus-minus/problem
Given an array of integers, calculate which fraction of its elements are positive, which fraction of its elements are negative, and which fraction of its elements are zeroes, respectively. Print the decimal value of each fraction on a new line.

Note: This challenge introduces precision problems. The test cases are scaled to six decimal places, though answers with absolute error of up to  are acceptable.

Input Format

The first line contains an integer, , denoting the size of the array. 
The second line contains  space-separated integers describing an array of numbers .

Output Format

You must print the following  lines:

A decimal representing of the fraction of positive numbers in the array compared to its size.
A decimal representing of the fraction of negative numbers in the array compared to its size.
A decimal representing of the fraction of zeroes in the array compared to its size.
Sample Input

6
-4 3 -9 0 4 1         
Sample Output

0.500000
0.333333
0.166667
Explanation

There are  positive numbers,  negative numbers, and  zero in the array. 
The respective fractions of positive numbers, negative numbers and zeroes are ,  and , respectively.
*/
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void plusMinus(int arr_size, int* arr) {
    int zeroes=0,positive=0,negative=0;
    for(int i=0;i<arr_size;i++){
        if(arr[i]==0){
            zeroes++;
        }
        else if(arr[i]>0){
            positive++;
        }
        else{
            negative++;
        }
    }
    double pos_ratio=(double)positive/arr_size;
    double neg_ratio=(double)negative/arr_size;
    double zer_ratio=(double)zeroes/arr_size;
    printf("%lf\n",pos_ratio);
    printf("%lf\n",neg_ratio);
    printf("%lf\n",zer_ratio);
}

int main() {
    int n; 
    scanf("%i", &n);
    int *arr = malloc(sizeof(int) * n);
    for (int arr_i = 0; arr_i < n; arr_i++) {
       scanf("%i",&arr[arr_i]);
    }
    plusMinus(n, arr);
    return 0;
}

