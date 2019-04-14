def chrcnt():
	a=input("Enter A String : ")
	u=0
	l=0
	n=len(a)
	for i in range(0,n-1,1):
		if a[i].isupper():
			u=u+1
		if a[i].islower():
			l=l+1
	print("In The String There Are ",u," uppercase letters and ",l," lowercase letters ")
