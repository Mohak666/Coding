n =3
m = 4
mat = []
def assignNumbers(bombs,n,m):
    for bomb in bombs:
        mat[bomb[0]][bomb[1]] = -1;
        print(mat)
        startx = starty =0;
        if(bomb[0] == 0):
            startx = 0
        else:
            startx = bomb[0] -1

        for x in range(startx,startx+3):
            if(bomb[1] == 0):
                starty = 0;
            else:
                starty = bomb[1]-1
            for y in range(starty,starty+3):
                if (mat[x][y]>-1):
                    mat[x][y]+=1;
    print(mat)

bombs  = [[0,0],[0,1]]
for x in range(0,2):
    print(x,end='')
print()
for i in range(n):
     z = []
     for j in range(m):
         z.append(0)
     mat.append(z)

print(mat)
assignNumbers(bombs,n,m)
