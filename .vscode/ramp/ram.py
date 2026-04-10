#COMMON STRING METHODS/OPERATIONS
str="Where are you?"
caps_str=str.upper()  #converts the string to uppercase
print(caps_str)
str1="HELLO DUNIYA"
small_str=str1.lower() #converts the string to lowercase
print(small_str)
n="1234"
print(n.isdigit())    #checks if the string contains only digits
a="ROCK"
print(a.isalpha())   #checks if the string contains only alphabets
b="ROCK123"
print(b.isalnum())  #checks if the string contains only alphabets and numeric characters
sp="    "
print(sp.isspace()) #checks if the string contains only whitespace characters
sub_str="Banana"
print(sub_str.find("na")) #finds the first occurrence of the specified substring and returns its index, or -1 if not found
print(sub_str.find("na",3)) #Starts searching for the substring "na" from index 3 and returns the index of the first occurrence
l="Hello World Welcome to Python"
print(l.split())   #Splits the string into a list of substrings based on whitespace by default
rep="Picks"
print(rep.replace("P","Tr")) #Replaces all occurrences of the specified old substring with the new substring
rip="HOW ARE YOU?"
print(rip.strip()) #Removes leading and trailing whitespace from the string & special characters
f="JAMES BOND"
print(f.startswith("J")) #checks if the string starts with the specified substring
print(f.endswith("E")) #checks if the string ends with the specified substring

