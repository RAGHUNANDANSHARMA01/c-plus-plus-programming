try:
    a=int(input("enter the number:"))
    if(a<0):
        raise valueError ("number is negative")
except valueError as a:
    print("you have entered incorrect number ")
else:
    print("the number is",a)
