#Checking PALINDROME of a string
str=input("Enter a string: ")

if str==str[::-1]:       #Reversing the string and comparing it with the original string done using slicing [::-1] means to reverse the string
    print("The string is a palindrome.")    
else:    
    print("The string is not a palindrome.")



