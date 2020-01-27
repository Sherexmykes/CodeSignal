int firstDuplicate(int[] a) {
	Set<Integer> had = new HashSet<Integer>();

	for (Integer num : a) {
		if (had.contains(num)) {
			return num;
		}
		had.add(num);
	}
	return -1;
}