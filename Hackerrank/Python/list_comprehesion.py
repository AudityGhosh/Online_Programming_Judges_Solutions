"""problem link: https://www.hackerrank.com/challenges/list-comprehensions/problem
input:
1
1
1
2
output:
[[0, 0, 0], [0, 0, 1], [0, 1, 0], [1, 0, 0], [1, 1, 1]]
"""
if __name__ == '__main__':
    x = int(input())
    y = int(input())
    z = int(input())
    n = int(input())

    data_final = []
    data_mid = []
    for i in range(0,x+1):
        for j in range(0,y+1):
            for k in range(0,z+1):
                if(i+j+k!=n):
                    data_mid=[i,j,k]
                    data_final.append(data_mid)

    print(data_final)
#Audity Ghosh    