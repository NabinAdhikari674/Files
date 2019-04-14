def pattern():
	i=0
	j=5
	k=0
	l=0
	while j>=i:
		for k in range(0,l,1):
			print(" ",end="")
		for i in range (0,j,1):
			print("*",end="")
		j=j-1
		l=l+1
		print("")
