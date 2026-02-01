import sys

a = [0 for i in range(30)]
for i in range(28):
    a[int(sys.stdin.readline())-1] = 1
for i in range(30):
    if a[i] == 0:
        print(i+1)