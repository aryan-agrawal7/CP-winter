def check(num):
    str_num = str(num)
    num_len = len(str_num)//2
    return str_num[:num_len]==str_num[num_len:]

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

