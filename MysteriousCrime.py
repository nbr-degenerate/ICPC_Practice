def murder() -> int:
    inp: str = input()
    inp: list = (int(i) for i in inp.split())
    x,y = inp
    matrix = []
    count=x; arg=1
    for i in range(y):
        inp: str=input()
        inp: list = inp.split()
        matrix+=[inp]
    for j in range(x):
            for k in range(j+2,x+1):
                s=matrix[i][j:k]
                arg=1
                for l in range(y):
                    if (l==i):
                        continue
                    if (" ".join([o for o in s])) in (" ".join([o for o in matrix[l]])):
                        continue
                    arg=0; break
                count+= arg           
    return count
print(murder())
