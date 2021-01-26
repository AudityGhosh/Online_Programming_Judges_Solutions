"""problem link:https://www.hackerrank.com/challenges/np-arrays/problem
input:
1 2 3 4 -8 -10
ouput:
[-10.  -8.   4.   3.   2.   1.]
first reverse the array and float the numbers"""
import numpy


def arrays(my_array):
    my_array = my_array[::-1]
    my_array = numpy.array(my_array, float)
    return my_array


arr = input().strip().split(' ')
result = arrays(arr)
print(result)
