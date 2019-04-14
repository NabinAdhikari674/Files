n=int(input("Enter the number of items : "))
items=['watch','book','pen','pencil','radio','vase']
price=[175,90,20,50,10,200]
weight=[10,9,4,2,1,20]
ratio=[17.5,10,5,25,10,10]
count=0
sum=0
W=0
w=40
while (count<n):
        a=min(weight)
        pos=weight.index(a)
        if(a<=w):
                sum=sum+price[pos]
                W=W+a
                w=w-a
                print('the min wt. is : ',a,'having weight ',W,'with price sum ',sum)
        weight.remove(a)
        count=count+1
weight=[10,9,4,2,1,20]
count=0
p=0
W=0
w=40
sum=0
print('\n')
while (count<n):
        a=max(price)
        pos=price.index(a)
        b=weight[pos]
        if (b<=w):
                sum=sum+price[pos]
                W=W+b
                p=p+a
                w=w-b
                print('The max price taken is',a,'having weight sum',W,'and price total',p)
        price.remove(a)
        count=count+1
price=[175,90,20,50,10,200]
count=0
W=0
w=40
r=0
sum=0
print('\n')
while(count<n):
        a=max(ratio)
        pos=ratio.index(a)
        b=weight[pos]
        if (b<=w):
                sum=sum+price[pos]
                W=W+b
                w=w-b
                r=r+a
                print('The max ratio taken is',a,'having weight sum',W,'and price total',sum,'and ratio sum',r)
        ratio.remove(a)
        count=count+1
