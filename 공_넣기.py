import sys

n, m = map(int, sys.stdin.readline().split())
basket = [0 for i in range(n)]
for i in range(m):
    a, b, c = map(int, sys.stdin.readline().split())
    for j in range(a, b+1):
        basket[j-1] = c
for i in basket:
    print("%d "%i, end='')