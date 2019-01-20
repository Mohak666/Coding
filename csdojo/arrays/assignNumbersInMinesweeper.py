n =3
m = 4
mat = []
def assignNumbers(bombs,n,m):
    for bomb in bombs:
        bombX = bomb[0]
        bombY = bomb[1]
        # -1 represenst bombs
        mat[bombX][bombY] = -1;
        print(mat)
        startX = startY =endX = endY=0;
        if(bombX == 0):
            startX = 0
            endX = 2
        else:
            startX = bombX -1
            endX =   bombX+2
        for x in range(startX,endX):
            if(bombY == 0):
                startY = 0;
                endY = 2
            else:
                startY = bombY-1
                endY = bombY+2
            for y in range(startY,endY):
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
