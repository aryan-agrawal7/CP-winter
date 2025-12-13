answer =0
while(True):
    line = input()
    if line == "end":
        break
    length = len(line)
    number =0
    start =0
    #print("debug length:",length)
    for i in range(13,1,-1):
        maxi =0
        #print("debug i:",i," start:",start, "till",(length - i)+2)
        for j in range(start,(length-i)+2):
            if(int(line[j])>maxi):
                maxi = int(line[j])
                start = j+1
        number = number*10 + maxi

    #print(number)
    answer+= number
print(answer)
