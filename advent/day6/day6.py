lst = []
while(True):
    inp = input()
    if(inp=="end"):
        break
    lst.append(inp.split())
curr = len(lst[0])
answer =0
for i in range(curr):
    current = 1
    if(lst[len(lst)-1][i]=='*'):
        for j in range(len(lst)-1):
            current *= int(lst[j][i])
        answer += current
    else:
        current =0
        for j in range(len(lst)-1):
            current += int(lst[j][i])
        answer += current
print(answer)



