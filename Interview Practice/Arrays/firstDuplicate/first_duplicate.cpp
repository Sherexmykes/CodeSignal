int firstDuplicate(std::vector<int> a) {
	std::set<int> had;

	for (auto num : a) {
		if (had.find(num) != had.end()) {
			return num;
		}
		had.insert(num);
	}
	return -1;
}