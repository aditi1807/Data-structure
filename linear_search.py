l=list(map(int,input().split()))
n=int(input())
f=0
for i in range(len(l)):
    if l[i]==n:
        f=1
        break
if f==1:
    print("key found at",i)
else:
    print("key not found")
