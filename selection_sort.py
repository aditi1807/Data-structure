l=list(map(int,input().split()))
for ind in range(len(l)):
    min_index=ind
    for j in range(ind+1,len(l)):
        if l[j]<l[min_index]:
            min_index=j
    (l[ind],l[min_index])=(l[min_index],l[ind])
print(l)
