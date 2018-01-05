""" Sherlock and Valid String : https://www.hackerrank.com/challenges/sherlock-and-valid-string/problem
DISCLAIMER : I got only 26.5/35 for this solution I am working on this solution to make it better . Your suggestions are also welcomed
Sherlock considers a string, , to be valid if either of the following conditions are satisfied:

All characters in  have the same exact frequency (i.e., occur the same number of times). For example,  is valid, but  is not valid.
Deleting exactly  character from  will result in all its characters having the same frequency. For example,  and  are valid because all their letters will have the same frequency if we remove occurrence of c, but  is not valid because we'd need to remove  characters.
Given , can you determine if it's valid or not? If it's valid, print YES on a new line; otherwise, print NO instead.

Input Format

A single string denoting .

Constraints

String  consists of lowercase letters only (i.e., [a-z]).
Output Format

Print YES if string  is valid; otherwise, print NO instead.

Sample Input 0

aabbcd
Sample Output 0

NO
Explanation 0

We would need to remove two characters from  to make it valid, because a and b both have a frequency of  and c and d both have a frequency of . This means  is invalid because we'd need to remove more than  character to make all its letters have the same frequency, so we print NO as our answer. """
#!/bin/python3

import sys
def isValid(s):
    hist=dict();
    for data in s:
        hist[data]=hist.get(data,0)+1
    if sorted(hist.values())[0]==sorted(hist.values())[-1]:
        answer="Yes"
    elif (sorted(hist.values())[0]+1==sorted(hist.values())[-1]) and (sorted(hist.values())[0]+1!=sorted(hist.values())[-2] or sorted(hist.values())[1]+ 1!=sorted(hist.values())[-1] ):
        answer="YES"
    else:
        answer="NO"
    return answer
        
        

s = input().strip()
result = isValid(s)
print(result)

