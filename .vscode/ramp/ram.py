#Count Frequency of characters in a string
str=input("Enter a string: ")
chr=input("Enter a character: ")
count=0

for i in str:
    if i==chr:
        count+=1
print("The frequency of",chr,"in the string is:",count)