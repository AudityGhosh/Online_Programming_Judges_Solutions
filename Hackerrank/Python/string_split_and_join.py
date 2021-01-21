"""problem link:https://www.hackerrank.com/challenges/python-string-split-and-join/problem
input:
this is a string
output:
this-is-a-string
"""


def split_and_join(line):
    return "-".join(line.split(" "))


if __name__ == '__main__':
    line = input()
    result = split_and_join(line)
    print(result)
#AUdity Ghosh
