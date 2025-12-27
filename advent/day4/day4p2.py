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

def solve():
    answer =0
    lst2 = []
    for i in range(len(lst)):
        lst2.append(lst[i][:])
    for i in range(len(lst)):
         for j in range(len(lst[0])):
            if(lst[i][j]=='@'):
                 if(check(lst,i,j)==True):
                    answer+=1
                    lst2[i][j]='.'
                    #print(i+1,j+1)
    return answer,lst2

def printdeb(lst,res):
    print('----- res =',res)
    for i in range(len(lst)):
        for j in range(len(lst[0])):
            print(lst[i][j],end='')
        print()
    print('-----')

lst=[]
while(True):
    s=input()
    if(s=='end'):
        break
    chararray = []
    for ch in s:
        chararray.append(ch)
    lst.append(chararray)
answer  = 0
while(True):
    res, lst = solve()
    printdeb(lst,res)
    if(res==0):
        break
    answer+=res
print(answer)

