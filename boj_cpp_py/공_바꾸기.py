<<<<<<< HEAD
import sys

n, m = map(int, sys.stdin.readline().split())
basket = [(i+1) for i in range(n)]
for i in range(m):
    a, b = map(int, sys.stdin.readline().split())
    tmp = basket[a-1]
    basket[a-1] = basket[b-1]
    basket[b-1] = tmp
for i in basket:
=======
import sys

n, m = map(int, sys.stdin.readline().split())
basket = [(i+1) for i in range(n)]
for i in range(m):
    a, b = map(int, sys.stdin.readline().split())
    tmp = basket[a-1]
    basket[a-1] = basket[b-1]
    basket[b-1] = tmp
for i in basket:
>>>>>>> 3ec4de7271082130ed75f098040545cec8e247ee
    print("%d "%i, end='')