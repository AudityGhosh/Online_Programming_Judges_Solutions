
"""problem link:https://www.hackerrank.com/challenges/write-a-function/problem
if year is divided evenly by 4 but not by 100 is a leap year
or if a year is evenly divide by 400 is a leap year
input:
1990
output:
False
"""


def is_leap(year):
    leap = False
    leap = ((year % 4 == 0) and (year % 100 != 0)) or (year % 400 == 0)
    return leap


year = int(input())
print(is_leap(year))

#Audity Ghosh