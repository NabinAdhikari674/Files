#Iterative Method...
print("..Call... \nfac(int) for Iterative method\nfactorial(int) for Recursive Method\nfact(int) for Dynamic Method")
def fac(x):
    fact=1
    for i in range(1,x+1,1):
        fact=fact*i
    return fact

#Recursive Method...
def factorial(x):
    if x==0 or x==1:
        return 1
    else :
        return x*factorial(x-1)


#Dynamic Method ...
def fact(x):
    temp=[1]*(x+1)
    for i in range (1,x+1):
        temp[i]=temp[i-1]*i
        print(temp[i])
    print(temp)
