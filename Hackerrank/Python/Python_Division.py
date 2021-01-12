"""problem link:https://www.hackerrank.com/challenges/python-division/problem
simple problem
a//b int division
a/b float division
input:
4
3
output:
1
1.33333333333
"""


if __name__ == '__main__':
    a = int(input())
    b = int(input())
    if b != 0:
        print(a // b)
        print(a / b)
#Audity Ghosh