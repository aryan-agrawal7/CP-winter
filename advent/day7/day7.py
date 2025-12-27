answer = 0
input_ = []
positions_splitters = []
while True:
    line = input()
    if line == "END":
        break
    row = []
    for i in range(len(line)):
        if(line[i]=='^' or line[i]=='S'):
            row.append(i)
    input_.append(line)
    positions_splitters.append(row)

#print(positions_splitters)
answer =0
beampos = set([positions_splitters[0][0]])
for i in range(1,len(input_)):
    beampos_l = list(beampos)
    for j in range(len(beampos_l)):
        if beampos_l[j] in positions_splitters[i]:
            if i+1 < len(input_):
                answer+=1
                #print(f"Beam at row {i} position {beampos_l[j]} split")
                beampos.add(beampos_l[j]-1)
                beampos.add(beampos_l[j]+1)
                beampos.remove(beampos_l[j])
print(answer)