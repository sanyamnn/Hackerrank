"""https://www.hackerrank.com/challenges/time-conversion/problem
Given a time in -hour AM/PM format, convert it to military (-hour) time.

Note: Midnight is  on a -hour clock, and  on a -hour clock. Noon is  on a -hour clock, and  on a -hour clock.

Input Format

A single string containing a time in -hour clock format (i.e.:  or ), where  and .

Output Format

Convert and print the given time in -hour format, where .

Sample Input

07:05:45PM
Sample Output

19:05:45
"""
#!/bin/python3

import sys

s = input().strip()
tim=s[:8]
hh,mm,ss=tim.split(':')
if "PM" in s:
    hh=int(hh)
    if hh is not 12:
        hh=hh+12
    hh=str(hh)
if "AM" in s:
    if int(hh)==12:
        hh="00"
print(hh,":",mm,":",ss,sep="")
        
        
        

