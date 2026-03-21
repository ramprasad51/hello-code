#Program to calculate area of rectangle and triangle 
length=float(input("Enter length of rectangle: "))
breadth=float(input("Enter breadth of rectangle: "))
area_rect=length*breadth

base=float(input("Enter base of a traingle: "))
height=float(input("Enter height of traingle: "))
area_tri=0.5*base*height
#Displays the area result 
print("Area of Rectangle: ",area_rect)
print("Area of Triangle: ",area_tri)