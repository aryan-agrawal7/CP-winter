answer =0
while(True):
    line = input()
    if line == "end":
        break
    length = len(line)
    maxi =0;
    maxipos =0;
    for i in range(length-1):
        if(int(line[i])>int('0')+maxi):
            maxi = int(line[i])
            maxipos = i
    maxi2 = 0
    maxipos2 =0
    for i in range(maxipos+1,length):
        if(int(line[i])>int('0')+maxi2):
            maxi2 = int(line[i])
            maxipos2 = i
    #print(maxi,maxi2)
    answer+= int(str(maxi)+str(maxi2))
print(answer)
