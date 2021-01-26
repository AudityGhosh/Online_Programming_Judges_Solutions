"""problem link:https://www.hackerrank.com/challenges/triangle-quest-2/problem
input:
3
output:
1
121
12321
can be easily solved with string but the problem does not allow."""


for i in range(1, int(input()) + 1):
    print(int((10 ** i - 1) / 9) ** 2)

#Audity Ghosh    
