#Checking whether the substring is present in the string or not
str=input("Enter the string: ")
sub_str=input("Enter the substring: ")
if sub_str in str:                     #Using the 'in' operator to check for the presence of the substring in the string
    print("The substring is present in the string.")
else:
    print("The substring is not present in the string.")