#TRAVERSAL of STRING

'''Traversing  means processing every element of sequence one by one from start to end
Traversal is used to access each element of sequence'''

#Example 1: Traversing a string and printing each character by while loop
from operator import index


fruit="Apple"
ix=0
while ix<len(fruit):
    index=fruit[ix]
    print(index)    
    ix+=1

#Example 2: Traversing a string and printing each character by for loop
word="Banana"
for char in word:
    print(char)

#Example 3: Traversing a string and performing string concatenation
prefixes="JKLMNOPQ"
suffix="ack"
for letter in prefixes:
    print(letter + suffix)