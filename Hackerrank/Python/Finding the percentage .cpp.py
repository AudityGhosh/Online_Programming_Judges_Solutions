"""problem link:https://www.hackerrank.com/challenges/finding-the-percentage/problem
input:
3
Krishna 67 68 69
Arjun 70 98 63
Malika 52 56 60
Malika
output:
56.00
Output the average of number of that particular query from the dict with two places after decimal point
"""

if __name__ == '__main__':
    n = int(input())
    student_marks = {}
    for _ in range(n):
        name, *line = input().split()
        scores = list(map(float, line))
        student_marks[name] = scores
    query_name = input()
    sum_score_of_the_student = 0
    for value in student_marks[query_name]:
        sum_score_of_the_student = sum_score_of_the_student + value
    avg = float(sum_score_of_the_student * 1.0 / len(student_marks[query_name]))
    print("%.2f" % round(avg, 2))
#Audity Ghosh
