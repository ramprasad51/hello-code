#Count words using string split method
str=input("Enter a string: ")
words=str.split()            #split() method splits the string into a list of words based on whitespace
print("The words in the string are:", words)
print("Number of words in the string:", len(words))