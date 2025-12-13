pos = 50
answer = 0
while(True):
    curr = input()
    if(curr=="Exit"):
        break
    dir = curr[0]
    steps = int(curr[1:])
    if(dir=='L'):
        pos -= steps
    else:
        pos += steps
    if(pos<0):
        pos+=100
    pos%=100
    if(pos==0):
        answer+=1
print(answer)



