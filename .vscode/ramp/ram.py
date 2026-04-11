#Counting vowels in a string
str=input("Enter a string: ")
count=0
for i in str:                
    if i in 'aeiouAEIOU':     #using 'in' operator to check vowels present in the string
        count+=1
print("The number of vowels in the string is:", count)