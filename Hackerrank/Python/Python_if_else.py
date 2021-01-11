"""problem link: https://www.hackerrank.com/challenges/py-if-else/problem
input:
24
Output:
Not Weird
Explanation: n>20 and even
"""



if __name__ == '__main__':
    n = int(input().strip())
    if n % 2 != 0:
        print("Weird")

    else:
        if (n >= 2 and n <= 5):
            print("Not Weird")
        elif (n >= 6 and n <= 20):
            print("Weird")
        else:
            print("Not Weird")
