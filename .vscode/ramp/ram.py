#SLICING OF STRINGS AND LISTS

'''Slicing is a technique used to extract a portion of a string/list by specifying a range of indices.
 The syntax for slicing is as follows:
string[start:stop:step]'''

'''NOTE: In slicing, the start index is included, while the stop index is excluded. 
The step parameter is optional and specifies the increment between indices. If step is not provided, it defaults to 1.'''

#Example of slicing a string
my_string = "Hello, World!"
print(my_string[0:5])       # Output: Hello
print(my_string[7:12])      # Output: World
print(my_string[:5])        # Output: Hello, if start index is omitted, takes element from 0 to stop index
print(my_string[7:])        # Output: World!, if stop index is omitted, takes element from start index to the end of the string
print(my_string[-6:-1])     # Output: World, negative indices count from the end of the string
print(my_string[:])         # Output: Hello, World!, if both start and stop indices are omitted, it returns the entire string

#STEP PARAMETER IN SLICING: step tells how many indices to skip between elements each time.
print(my_string[0:13:2])    # Output: Hlo ol! ,This will take every second character from index 0 to 12 (inclusive)

#REVERSE SLICING: If you want to reverse a string or list, you can use slicing with a negative step.by [::-1]
print(my_string[::-1])      # Output: !dlroW ,olleH, this will reverse the string by taking every character in reverse order

#Example of slicing a list
my_list = [1, 2, 3, 4, 5]
print(my_list[0:3])       # Output: [1, 2, 3]
print(my_list[2:5])       # Output: [3, 4, 5]
print(my_list[-4:-1])     # Output: [2, 3, 4], negative indices count from the end of the list
print(my_list[::2])       # Output: [1, 3, 5], this will take every second element from the list
print(my_list[::-1])      # Output: [5, 4, 3, 2, 1], this will reverse the list by taking every element in reverse order