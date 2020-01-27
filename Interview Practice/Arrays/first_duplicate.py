def fristDuplicate(a):
	had = set()

	for num in a:
		if num in had:
			return num
		had.add(num)

	return -1