std::vector<std::vector<int>> rotateImage(std::vector<std::vector<int>> a) {
	std::reverse(a.begin(), a.end());

	for (int r = 0; r < a.size(); r++) {
		for (int c = 0; c < r; c++) {
			std::swap(a[r][c], a[c][r]);
		}
	}

	return a;
}