n=int(input("Enter The number of items : "))
'''print("\nEnter The value for Weights : ")
val=[]
wt=[]
for i in range(0,n):
        wt.append(int(input()))
print("The Weights are : ",wt)
print("\nEnter The value for Values : ")
for i in range(0,n):
        val.append(int(input()))'''
val=[8,6,5]
wt=[1,3,5]
print("The weights and their values are:\t",wt,"\n\t\t\t\t\t",val,"\n\n")
m=max(val)
t=[[0]*(m+1) for i in range(n+1)]
for i in range(0,n):
        for j in range(0,m+1):
                if j<wt[i]:
                       t[i][j]=t[i-1][j]
                else:
                        t[i][j]=max(val[i]+t[i-1][j-wt[i]],t[i-1][j])

                ab=t[i][j]
                print(ab,end="\t")
        print("\n")
