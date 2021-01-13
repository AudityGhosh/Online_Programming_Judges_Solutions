"""problem link:https://www.hackerrank.com/challenges/nested-list/problem
input:
5
Harry
37.21
Berry
37.21
Tina
37.2
Akriti
41
Harsh
39
Output:
Berry
Harry
Explanation: first I read the list of students[names,score], took the set with only scores, list them, and the second lowest mark will be with index 1
Then I matched students names with second lowest score and print them sorted.
"""

if __name__ == '__main__':
    students = []
    for _ in range(int(input())):
        name = input()
        score = float(input())
        students.append([name, score])

    second_lowest_score = sorted(list(set(x[1] for x in students)))[1]

    names = []

    for i, v in students:
        if v == second_lowest_score:
            names.append(i)
    names.sort()
    for i in names:
        print(i)
#Audity Ghosh        
