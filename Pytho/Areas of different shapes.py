class A:
    def __init__(self,length,breadth,height):
        self.length=length
        self.breadth=breadth
        self.height=height
    def area_rec(self):
        return self.length*self.breadth
    def area_sq(self):
        return self.length*self.length
    def area_cir(self):
        return self.length*self.length*3.14
print("Area for Which Shape ?? ")
print("1.Rectangle\t2.Square\t3.Circle")
i=int(input("Enter Your Choice : "))
if i==1:
    print("Enter The length of rec : ")
    l=int(input())
    b=int(input("Enter the Breadth of the rec : "))
    x=A(l,b,1)
    print("\n The Area of the rectangle is : ",x.area_rec())
if i==2:
    print("Enter The length of square : ")
    l=int(input())
    x=A(l,1,1)
    print("\n The Area of the square is : ",x.area_sq())
if i==3:
    print("Enter The radius of circle : ")
    l=int(input())
    x=A(l,1,1)
    print("\n The Area of the circle is : ",x.area_cir())

    
