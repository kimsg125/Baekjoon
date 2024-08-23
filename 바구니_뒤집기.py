import sys

n, m = map(int, sys.stdin.readline().split())
basket = [(i+1) for i in range(n)]
for i in range(m):
    a, b = map(int, sys.stdin.readline().split())
    tmp = []
    for j in range(a-1, b):
        tmp.append(basket[j])
    for j in range(a-1, b):
        basket[j]=tmp.pop()
for i in basket:
    print("%d "%i, end='')