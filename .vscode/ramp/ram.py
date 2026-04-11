#Converting the upper case to lower case and vice versa
str=input("Enter the string: ")
result=""
for i in str:
    if i.isupper():
        result+=i.lower()
    elif i.islower():
        result+=i.upper()
    else:
        result+=i
print("The converted string is:", result)

#Manually converting the upper case to lower case and vice versa
str1=input("Enter another string: ")
result1=""
for i in str1:
    if i>='A' and i<='Z':
        result1+=chr(ord(i)+32)
    elif i>='a' and i<='z':
        result1+=chr(ord(i)-32)
    else:
        result1+=i
print("The converted string is:", result1)