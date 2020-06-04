x = int(input())
arr = [[int(j) for j in input().split()] for i in range(x)]

for i in range(x):
	j = 0
	while i >= 0:
		print(arr[i][j], end=" ")
		i -= 1
		j += 1


for j in range(x-1, 0, -1):
	i = x - 1
	k = x - j
	for u in range(1, j+1):
		print(arr[i][k], end=" ")
		i -= 1
		k += 1