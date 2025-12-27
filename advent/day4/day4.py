def check(lst,x,y):
    dx = [-1,0,1]
    dy = [-1,0,1]
    count =0
    for dxi in dx:
        for dyi in dy:
            if(dxi==0 and dyi==0):
                continue
            nx = x + dxi
            ny = y + dyi
            if(0<=nx<len(lst) and 0<=ny<len(lst[0])):
                if(lst[nx][ny]=='@'):
                    count+=1
    if(count<4):
        return True
    else:
        return False


lst=[]
while(True):
    s=input()
    if(s=='end'):
        break
    lst.append(s)
answer =0
for i in range(len(lst)):
    for j in range(len(lst[0])):
        if(lst[i][j]=='@'):
            if(check(lst,i,j)==True):
                answer+=1
                #print(i+1,j+1)
print(answer)

