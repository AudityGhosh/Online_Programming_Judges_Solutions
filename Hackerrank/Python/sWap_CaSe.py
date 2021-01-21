"""problem link:https://www.hackerrank.com/challenges/swap-case/problem
input:
HackerRank.com presents "Pythonist 2".
output:
hACKERrANK.COM PRESENTS "pYTHONIST 2".
just use swapcase() method"""


def swap_case(s):
    return s.swapcase()


if __name__ == '__main__':
    s = input()
    result = swap_case(s)
    print(result)
#Audity Ghosh
