<<<<<<< HEAD
import sys

a = [0 for i in range(30)]
for i in range(28):
    a[int(sys.stdin.readline())-1] = 1
for i in range(30):
    if a[i] == 0:
=======
import sys

a = [0 for i in range(30)]
for i in range(28):
    a[int(sys.stdin.readline())-1] = 1
for i in range(30):
    if a[i] == 0:
>>>>>>> 3ec4de7271082130ed75f098040545cec8e247ee
        print(i+1)