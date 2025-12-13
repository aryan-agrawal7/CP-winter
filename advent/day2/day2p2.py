def check(num):
    str_num = str(num)
    for i in range(1,len(str_num)):
        currlen = 0
        if(len(str_num)%i==0):
            currlen = i
            #print("currlen=",currlen)
            start = str_num[0:currlen]
            flag = True
            for j in range(1,len(str_num)//currlen):
                #print("debug",j)
                #print("debug",str_num[j*currlen:(j+1)*currlen],start)
                if(str_num[j*currlen:(j+1)*currlen] != start):
                    flag = False
                    break
            if(flag):
                #print("ans",str_num)
                return True
        else:
            continue

    return False

all_input = []
while True:
    line = input()
    if(line=="end"):
        break
    current_input = line.split(',')
    all_input.extend(current_input)
answer = 0
for ele in all_input:
    if(ele==''):
        continue
    inp = ele.split('-')
    a = int(inp[0])
    b = int(inp[1])
    for i in range(a,b+1):
        checker = check(i)
        if(checker):
            answer+=i
print(answer)

