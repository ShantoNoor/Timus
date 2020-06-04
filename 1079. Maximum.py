max_arr_size = 10_0010
arr = [0]*max_arr_size
arr[1] = 1
for i in range(1, max_arr_size//2):
	arr[2*i] = arr[i]
	arr[2*i+1] = arr[i] + arr[i+1]

count = 0
while count < 10:
	x = int(input())
	if x == 0:
		break
	big = -1000
	for i in arr[0:x+1]:
		if big < i:
			big = i
	print(big)
	count += 1