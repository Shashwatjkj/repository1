for i in range(1,11):
    for j in range(1,i+1):
        if(i&1):
            if(j&1):
                print("A",end=" ")
            else:
                print("B",end=" ")    
        else:
            if(j&1):
                print("B",end=" ")
            else:
                print("A",end=" ")     
    print("\n",end="")             