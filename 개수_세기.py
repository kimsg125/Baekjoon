<<<<<<< HEAD
import sys

N=int(input())
n=map(int,sys.stdin.readline().split())
f=int(input())

cnt=0
for i in n:
    if i==f:
        cnt+=1
        
=======
import sys

N=int(input())
n=map(int,sys.stdin.readline().split())
f=int(input())

cnt=0
for i in n:
    if i==f:
        cnt+=1
        
>>>>>>> 3ec4de7271082130ed75f098040545cec8e247ee
print(cnt)