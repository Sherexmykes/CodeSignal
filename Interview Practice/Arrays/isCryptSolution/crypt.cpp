bool isCryptSolution(std::vector<std::string> crypt, std::vector<std::vector<char>> solution) {
	for (auto chars : solution) {
		for (int i = 0; i < crypt.size(); i++) {
			std::replace(crypt[i].begin(), crypt[i].end(), chars[0], chars[1]);
		}
	}

	for (auto str : crypt) {
		if (str.compare(0, 1, "0") == 0 && str.size() > 1) {
			return false;
		}
	}

	long long x0 = 0, x1 = 0, x2 = 0;
	std::istringstream(crypt[0]) >> x0;
	std::istringstream(crypt[1]) >> x1;
	std::istringstream(crypt[2]) >> x2;

	return x0 + x1 == x2;
}
