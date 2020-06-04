map = {
	"a": 1, "b": 2, "c": 3, "d": 4, 
	"e": 5, "f": 6, "g": 7, "h": 8
}


def genPos(pos):
	return int(map[pos[0]]), int(pos[1])


def moves(row, col):
	xx = [2,  2, -2, -2, -1, 1, -1,  1]
	yy = [1, -1,  1, -1,  2, 2, -2, -2]

	moveCount = 0

	for i in range(8):
		if row+xx[i] >= 1 and row+xx[i] <= 8:
			if col+yy[i] >= 1 and col+yy[i] <= 8:
				moveCount += 1

	return moveCount


x = int(input())

for i in range(x):
	pos = input()
	row, col = genPos(pos)
	print(moves(row, col))