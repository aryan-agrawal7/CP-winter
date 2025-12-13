import sys
current_pos = 50
answer = 0
while True:
    try:
        line = sys.stdin.readline()
        if not line or line.strip() == "Exit":
            break
    except EOFError:
        break

    line = line.strip()
    if not line: continue

    direction = line[0]
    steps = int(line[1:])
    if direction == 'R':
        target_pos = current_pos + steps
        count = (target_pos // 100) - (current_pos // 100)
        answer += count
        current_pos = target_pos
    elif direction == 'L':
        target_pos = current_pos - steps
        count = ((current_pos - 1) // 100) - ((target_pos - 1) // 100)
        answer += count
        current_pos = target_pos
print(answer)
