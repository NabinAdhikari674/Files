print("LONGEST Common SUBsequence ...\n")
a=input("Enter The 1st String : ")
b=input("enter The 2nd String : ")
'''n1=len(a)
n2=len(b)
t = [[0]*(n1+1) for i in range(n2+1)]
for i in range(0,n1+1):
    for j in range(0,n2+1):
        if (a[i]==b[j]):
            t[i][j]=t[i-1][j-1]+1
        else:
            t[i][j]=max(t[i-1][j],t[i][j-1])
        ab=t[i][j]
        print(b[ab])'''
        
####
'''
m=len(a)
n=len(b)
L = [[None]*(n+1) for i in range(m+1)]
for i in range(m+1):
    for j in range(n+1):
        if a[i-1] == b[j-1]:
            L[i][j] = L[i-1][j-1]+1
        else :
            L[i][j] = max(L[i-1][j] , L[i][j-1])
'''
def lcs(X , Y):
	# find the length of the strings
	m = len(X)
	n = len(Y)

	# declaring the array for storing the dp values
	L = [[None]*(n+1) for i in range(m+1)]

	"""Following steps build L[m+1][n+1] in bottom up fashion
	Note: L[i][j] contains length of LCS of X[0..i-1]
	and Y[0..j-1]"""
	for i in range(m+1):
		for j in range(n+1):
			if i == 0 or j == 0 :
				L[i][j] = 0
			elif X[i-1] == Y[j-1]:
				L[i][j] = L[i-1][j-1]+1
			else:
				L[i][j] = max(L[i-1][j] , L[i][j-1])

	# L[m][n] contains the length of LCS of X[0..n-1] & Y[0..m-1]
	return L[m][n]
