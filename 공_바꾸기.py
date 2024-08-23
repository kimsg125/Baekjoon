import sys

n, m = map(int, sys.stdin.readline().split())
basket = [(i+1) for i in range(n)]
for i in range(m):
    a, b = map(int, sys.stdin.readline().split())
    tmp = basket[a-1]
    basket[a-1] = basket[b-1]
    basket[b-1] = tmp
for i in basket:
    print("%d "%i, end='')