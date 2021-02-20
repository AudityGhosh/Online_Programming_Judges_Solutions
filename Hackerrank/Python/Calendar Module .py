"""problem link:https://www.hackerrank.com/challenges/calendar-module/problem
input:
08 05 2015
output:
WEDNESDAY
"""
import calendar

x = list(map(int, input().split()))
month = x[0]
day = x[1]
year = x[2]
d = calendar.weekday(year, month, day)
if d is 0:
    print("MONDAY")
elif d is 1:
    print("TUESDAY")
elif d is 2:
    print("WEDNESDAY")
elif d is 3:
    print("THURSDAY")
elif d is 4:
    print("FRIDAY")
elif d is 5:
    print("SATURDAY")
elif d is 6:
    print("SUNDAY")
# Audity Ghosh
