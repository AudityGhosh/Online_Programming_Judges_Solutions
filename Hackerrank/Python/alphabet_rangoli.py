"""
problem link:https://www.hackerrank.com/challenges/alphabet-rangoli/problem
input:
5
output:
--------e--------
------e-d-e------
----e-d-c-d-e----
--e-d-c-b-c-d-e--
e-d-c-b-a-b-c-d-e
--e-d-c-b-c-d-e--
----e-d-c-d-e----
------e-d-e------
--------e--------
"""

def print_rangoli(n):
    q = n - 1
    data = []
    for i in range(1, n + 1):
        t = ""
        s = ""
        p = (2 * q)
        for u in range(0, p):
            s = s + "-"
        q = q - 1
        for j in range(n, n - i, -1):
            s = s + chr(ord('`') + int(j)) + "-"
        s = s[:-1]
        t = t + s
        print(s, end="")

        s = s[::-1]
        s = s[1:]
        t = t + s
        print(s, end="")
        data.append(t)
        print()
    data.reverse()
    for i in range(1, len(data)):
        print(data[i])


if __name__ == '__main__':
    n = int(input())
    print_rangoli(n)
#Audity Ghosh