def degitsum(x):
	sum = 0
	while(x != 0):
		sum += x % 10
		x //= 10
	return sum


def pow(x, y):
	res = 1
	for i in range(0, y):
		res *= x
	return res


arr = [0]*38

x = int(input())

for i in range(0, pow(10, x//2)):
	arr[degitsum(i)] += 1


sum = 0

for i in arr:
	sum += pow(i, 2)


print(sum)