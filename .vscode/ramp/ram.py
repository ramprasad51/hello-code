#STUDENT GRADE TRACKER
#Take input
n=int(input("Enter number of students:"))
students=[]    #Empty list to store students data
for i in range(n):
    print("Enter student deatils",i+1)
    name=input("Name:")
    marks=float(input("Marks:"))
    student={"name":name,"marks":marks}      #Displaying student deatils in the form of dicitionaries
    students.append(student)                 #Appending dicitionary data to list

#Calculate Average
all_marks=[]
for s in students:
    all_marks.append(s["marks"])
avg=sum(all_marks)/len(all_marks)

#find ToPPER
topper=students[0]
for s in students:
    if s["marks"]>topper["marks"]:
        topper=s
#find Lowest scorer
lowest=students[0]
for s in students:
    if s["marks"]<lowest["marks"]:
        lowest=s
#DISPLAY SUMMARY
print("\n---SUMMARY REPORT---")
print(student)
print("average:",avg)
print("Topper:",topper["name"],"-",topper["marks"])
print("Lowest scorer:",lowest["name"],"-",lowest["marks"])


