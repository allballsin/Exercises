# Counter: I had issues hand-running an algorithm
#a = [1,2,2,2,3,4,5,6,7,8,9]
a = [1,4,5,6,7,7,7,8,9]
def counthigh(l,low,high,key):
    if low>high:
        print("Returning!",low)
        return low
    mid = (low+high)//2
    if a[mid]>key:
        print ("Go low!",low,high,mid)
        return counthigh(l,low,mid-1,key)
    else:
        print ("Go high!", low,high,mid)
        return counthigh(l,mid+1,high,key)


def countlow(l,low,high,key):
    if low>high:
        print("Returning!",low)
        return low
    mid = (low + high)//2
    if a[mid]<key:
        print ("Go high!",low,high)
        return countlow(l,mid+1,high,key)
    else:
        print ("Go low!",low,high)
        return countlow(l,low,mid-1,key)



low=0
high=8
key=7
print(counthigh(a,low,high,key)-countlow(a,low,high,key))

