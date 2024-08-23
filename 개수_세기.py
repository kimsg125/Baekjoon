import sys

N=int(input())
n=map(int,sys.stdin.readline().split())
f=int(input())

cnt=0
for i in n:
    if i==f:
        cnt+=1
        
print(cnt)