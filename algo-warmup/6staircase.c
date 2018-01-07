/*https://www.hackerrank.com/challenges/staircase/problem
Consider a staircase of size :

   #
  ##
 ###
####
Observe that its base and height are both equal to , and the image is drawn using # symbols and spaces. The last line is not preceded by any spaces.

Write a program that prints a staircase of size .

Input Format

A single integer, , denoting the size of the staircase.

Output Format

Print a staircase of size  using # symbols and spaces.

Note: The last line must have  spaces in it.

Sample Input

6 
Sample Output

     #
    ##
   ###
  ####
 #####
######
Explanation

The staircase is right-aligned, composed of # symbols and spaces, and has a height and width of .*/
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void staircase(int n) {
    for(int row=0;row<n;row++){
        for(int column=0;column<n;column++){
            if(column==n-1){
                printf("#\n");
            }
            else if(column<n-row-1){
                printf(" ");
            }
            else{
                printf("#");
            }
        }
    }
        
}

int main() {
    int n; 
    scanf("%i", &n);
    staircase(n);
    return 0;
}

