print("CAll fib(int_value) OR fibco(int_value) Or fibonacci(int_value) to get the fib Series : ")

###Using List
def fib(n):
    a=[0]*(n+1)
    a[0]=0
    a[1]=1
    for i in range(2,n+1):
        a[i]=a[i-1]+a[i-2]
    print(a)
####################################################################
FibArray = [0,1]
 
def fibonacci(n):
    if n<0:
        print("Incorrect input")
    elif n<=len(FibArray):
        return FibArray[n-1]
    else:
        temp_fib = fibonacci(n-1)+fibonacci(n-2)
        FibArray.append(temp_fib)
        return temp_fib

    
###Using Dictionary
d={}
def fibco(n):
    d[0]=0
    d[1]=1
    for i in range(2,n+1):
        d[i]=d[i-1]+d[i-2]
    print(d)
