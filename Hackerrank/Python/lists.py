"""
https://www.hackerrank.com/challenges/python-lists/problem
input:
12
insert 0 5
insert 1 10
insert 0 6
print
remove 6
append 9
append 1
sort
print
pop
reverse
print
output:
[6, 5, 10]
[1, 5, 9, 10]
[9, 5, 1]
list.insert(index,element), print(list), list.remove(el)[first ocuur remove], list.append(el),
list.pop(-1)[last element remove], list.sort(),list.reverse.
"""
data = []
for _ in range(int(input())):
    instructions_with_values = list(map(str, input().split()))
    if instructions_with_values[0] == "insert":
        data.insert(int(instructions_with_values[1]), int(instructions_with_values[2]))
    elif instructions_with_values[0] == "reverse":
        data.reverse()
    elif instructions_with_values[0] == "remove":
        data.remove(int(instructions_with_values[1]))
    elif instructions_with_values[0] == "sort":
        data.sort()
    elif instructions_with_values[0] == "append":
        data.append(int(instructions_with_values[1]))
    elif instructions_with_values[0] == "pop":
        data.pop(-1)
    else:
        print(data)
#Audity Ghosh