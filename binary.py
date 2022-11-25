def binarysearch(myList,target):
    left=0
    right=len(myList)
    steps=0
    while(left<right-1):
        steps=steps+1
        mid=int((right+left)/2)
        number_at_mid=myList[mid]
        print("Steps taken to find the number:",steps)
        if(target==number_at_mid):
            return True
        if(target<number_at_mid):
            right=mid
        else:
            left=mid
        if(left>=right):
            return False
        if((left==(right-1)) and (myList[left]==target)):
            return True
    return False
myList=[11,27,36,44,51,22,65,1,78]
print(myList)
myList.sort()
print(myList)
repeat="y"
while(repeat=="y" or repeat=="y"):
    mytarget=int(input("Enter number to find:"))
    if binarysearch(myList,mytarget):
        print("Found!")
    else:
        print("Not Found!")
    repeat=input("Another search?(y/n)")
