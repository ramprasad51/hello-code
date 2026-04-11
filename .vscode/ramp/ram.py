#Replacing substring from string
'''Since Strings are immutable in Python, we cannot change the original string directly. However, we can create a new string with the desired modifications.
 We can use the replace() method to replace a substring with another substring.'''
str=input("Enter a string:")
new_str=str.replace("a","x")

print("Modified string:",new_str)
