function firstDuplicate(a) {
	var had = new Set();

	for (var num of a) {
		if (had.has(num)) {
			return num;
		}
		had.add(num);
	}
	return -1;
}