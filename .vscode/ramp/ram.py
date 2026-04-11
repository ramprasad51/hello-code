#Removing vowels from a string
def remove_vowels(phrase):
    vowels = 'aeiouAEIOU'
    result = ''
    for char in phrase:
        if char not in vowels:    #The 'not in' operator checks if the character is not a vowel
            result += char      #If the character is not a vowel, it is added to the result string
    return result
#Example usage
phrase=input("Enter a phrase: ")
result = remove_vowels(phrase)  #Calling the function to remove vowels from the input phrase
print("Phrase without vowels:", result)