#EXCEPTION HANDLING
def DivExp(a,b):
    assert a>0,"a must be greater than 0"
    if b==0:
        raise ZeroDivisionError("Division by zero is not allowed")
    c=a/b
    return c
a=float(input("Enter value for a:"))
b=float(input("Enter value for b:"))
try:
    result=DivExp(a,b)
    print("Result of a/b:",result)
except AssertionError as ae:
    print("AssertionError:",ae)
except ZeroDivisionError as ze:
    print("Exception:",ze)
    
   