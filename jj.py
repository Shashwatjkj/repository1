def prim(n):
    prime=[True for i in range(n+1)]
    p=2
    while(p*p<=n):
     if(prime[p]==True):
        for i in range(p*p,n+2,p):
            if(prime[i]==True):
              prime[i]=False
     p=p+1
    for i in range(2,n+2):
        if(prime[i]==True):
            print(i,end=" ")
prim(7)

