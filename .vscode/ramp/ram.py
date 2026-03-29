#Program to remove vowels from a name
def remove_vowels(name):#function to remove vowels from the name
    result=""  #to store name without vowels

    for ch in name:#iterate through each character in the name
        if ch not in "aeiouAEIOU":#check if the character is not a vowel
            result+=ch
    return result

name=input("Enter your name:")

#function call
output=remove_vowels(name)
#Display name without v0wElS
print("Name after removing vowels:",output)
    