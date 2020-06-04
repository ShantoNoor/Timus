def printList(arr):
	for i in arr:
		for j in i:
			print(j, end=" ")
		print()


x = int(input())
arr = [[0 for a in range(x)] for b in range(x)]

num = 1
for i in range(x-1, -1, -1):
	j = 0
	while i <= x-1:
		arr[j][i] = num
		num += 1
		j += 1
		i += 1	


for i in range(1, x):
	j = 0
	while i <= x-1:
		arr[i][j] = num
		num += 1
		i += 1
		j += 1	


printList(arr)

# 00 01 => 2 1
# 10 11 => 4 3

# 00 01 02 => 4 2 1
# 10 11 12 => 7 5 3
# 20 21 22 => 9 8 6