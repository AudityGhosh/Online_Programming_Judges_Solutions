"""problem link:https://www.hackerrank.com/challenges/find-angle/problem
input:
10
10
output:
45(degree sign)"""

import math

AB = float(input())
BC = float(input())
AC = (AB * AB + BC * BC) ** 0.5
MC = AC / 2
BC = BC / 2
ans = round(math.degrees(math.acos(BC / MC)))

print(ans, chr(176), sep='')
