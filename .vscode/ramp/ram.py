#Reversing of the string by using slicing
str=input("Enter the string: ")
print("The reversed string is: ",str[::-1])

str1=input("Enter another string: ")
#Reversing of the string using for loop
reversed_str=""
for i in str1:
    reversed_str=i+reversed_str
print("The reversed string is: ",reversed_str)

#Reversing of the string using while loop
str2=input("Enter another string: ")
reversed_str2=""
i=len(str2)-1   
while i>=0:
    reversed_str2=reversed_str2+str2[i]
    i-=1
print("The reversed string is: ",reversed_str2)