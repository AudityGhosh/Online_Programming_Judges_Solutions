"""problem link:https://www.hackerrank.com/challenges/python-tuples/problem
input:
2
1 2
output:
3713081631934410656(differs)
hash is Python offers hash() method to encode the data into unrecognisable value.
hash() returns hashed value only for immutable objects, hence can be used as an indicator to check for mutable/immutable objects.
Tuple immutable
"""

if __name__ == '__main__':
    n = int(input())
    integer_list = tuple(map(int, input().split()))
    print(hash(integer_list))
#Audity Ghosh
