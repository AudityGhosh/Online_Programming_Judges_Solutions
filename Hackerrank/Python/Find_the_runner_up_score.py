"""problem link:https://www.hackerrank.com/challenges/find-second-maximum-number-in-a-list/problem
input:
5
2 3 6 6 5
output:
5
I sorted the list decreasingly and find the first element which is not equal to max(list)
"""

if __name__ == '__main__':
    n = int(input())
    arr = list(map(int, input().split()))
    arr.sort(reverse=True)
    for i in arr:
        if i is not max(arr):
            print(i)
            break
#Audity Ghosh