def pal():
	a=input("Enter A String : ")
	n=len(a)
	b=a[::-1]
	if a==b:
		print("The string is palindrome ")
	else :
		print("The String is NOT a palindrome")
