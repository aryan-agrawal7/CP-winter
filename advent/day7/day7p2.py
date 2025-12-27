import sys
input_ = []
positions_splitters = []
while True:
    line = input()
    if line == "END":
        break
    row = set()
    for i in range(len(line)):
        if line[i] == '^' or line[i] == 'S':
            row.add(i)
    input_.append(line)
    positions_splitters.append(row)

memo = {}
def get_answer(beam_pos, i):
    state = (beam_pos, i)
    if state in memo:
        return memo[state]
    if i == len(input_) - 1:
        return 1
    count = 0
    if beam_pos in positions_splitters[i]:
        if i + 1 < len(input_):
            count = get_answer(beam_pos + 1, i + 1) + get_answer(beam_pos - 1, i + 1)
    else:
        if i + 1 < len(input_):
            count = get_answer(beam_pos, i + 1)
    memo[state] = count
    return count

start_pos = positions_splitters[0].pop()
print(get_answer(start_pos, 1))