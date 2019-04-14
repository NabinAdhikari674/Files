arr=[1,2,3,4,5]
l=0
u=5
print("Call binary(lowerBound,UpperBound,ElementToSearch) to search list A")
def binary(l, u, x):
    if u >= l:
        mid = int(l + (u - l)/2)
        if arr[mid] == x:
            print("ELEMENT FOUND IN ",mid+1," pos")
        elif arr[mid] > x:
            return binary(l, mid-1, x)
        else:
            return binary(mid+1, u, x)
    else:
        print("Element is Not FOUND !!")
