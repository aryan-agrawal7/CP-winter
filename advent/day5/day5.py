maxi=0
mini=549167282237119
lst = []
while(True):
    inp = input()
    if(inp=="break"):
        break
    else:
        inpsplit = inp.split("-")
        a = int(inpsplit[0])
        b = int(inpsplit[1])
        lst.append((a,b))
        if(b>maxi):
            maxi=b
        if(a<mini):
            mini=a
#print(maxi,mini)
answer =0
while(True):
    inp= input()
    if(inp=="done"):
        break
    else:
        q = int(inp)
        if(q>maxi or q<mini):
            continue
        for pair in lst:
            if(q>=pair[0] and q<=pair[1]):
                answer+=1
                #print("debug "+str(answer)+" "+str(q))
                break
print(answer)
