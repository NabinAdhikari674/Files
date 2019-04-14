def pat():
        i=0
        j=0
        k=0
        while k<5:
                for i in range(0,k):
                        print("*",end="")
                for j in range(5,k,-1):
                        print(" ",end="")
                print("")
                k=k+1
