#Python program to display Fibonacci sequence up to n even terms using while loop
n=int(input("Enter number of even terms for fibonacci sequence: "))

a=0 #first term of the sequence
b=1 #second term of the sequence
count=0 

while count<n: #loop will run until count is less than n
    if a%2==0: #check if the term is even
     print(a,end="   ") #print the term and stay on the same line

    c=a+b #calculate the next term in the sequence by adding the last two terms
    a=b   #update a to be the value of b
    b=c   
    count+=1 #increment the count by 1 to keep track of how many even terms have been printed
    