"""problem link:https://www.hackerrank.com/challenges/python-loops/problem
for all non negative number i below n, print i^2
input:
5
output:
0
1
4
9
16
"""


if __name__ == '__main__':
    n = int(input())
    for i in range(0, n):
        print(i*i)
#Audity Ghosh        