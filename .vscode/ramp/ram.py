#String formatting

#Done by using the .format() method and placeholders in the string

#Single placeholder/value
phrase="His name is {0}!".format("Ram Prasad")
print(phrase)
#Multiple placeholders/values
Name="Ram Prasad"
Age=19
phrase2="His name is {0} and his age is {1}.".format(Name,Age)
print(phrase2)
#Swapping the order of the placeholders
phrase3="His name is {1} and his age is {0}.".format(Name,Age)
print(phrase3)
#Format specifications
x=4
y=5
phrase4="2**10={0} & {1}*{2}={3:.3f}".format(2**10,x,y,x*y)
print(phrase4)