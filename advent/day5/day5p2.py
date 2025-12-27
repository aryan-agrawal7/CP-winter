maxi = 0
mini = 549167282237119
lst = []

while True:
    inp = input()
    if inp == "break":
        break
    inpsplit = inp.split("-")
    a = int(inpsplit[0])
    b = int(inpsplit[1])
    lst.append((a, b))

lst.sort()
answer = 0
curr_start, curr_end = lst[0]
for i in range(1, len(lst)):
    next_start, next_end = lst[i]
    if next_start <= curr_end:
        curr_end = max(curr_end, next_end)
    else:
        answer += (curr_end - curr_start + 1)
        curr_start, curr_end = next_start, next_end
answer += (curr_end - curr_start + 1)

print(f"Total unique numbers covered: {answer}")
