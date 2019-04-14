suu=open("MyFile.txt","w")
suu.write("Hello This is Nabin Homie")
suu.close()
suu=open("MyFile.txt","r+")
a=suu.read()
b=a.split()
m=0
for i in b:
	l=len(i)
	if l>m:
		m=l
print("The longest word(s) is : ")
for i in b:
	if len(i)==m:
		print(i)

print("The maximum Length is : ",m)
