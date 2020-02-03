bool sudoku2(std::vector<std::vector<char>> grid) {
	bool correct = true;

	for (int r = 0; r < grid.size(); r++) {
		std::set<int> r_set;
		std::set<int> c_set;
		std::set<int> g_set;

		for (int c = 0; c < grid[r].size(); c++) {
			correct &= grid[r][c] != '.' ? r_set.insert(grid[r][c]).second : true;
			correct &= grid[c][r] != '.' ? c_set.insert(grid[c][r]).second : true;
			correct &= grid[3*(r/3)+c%3][3*(r%3)+c/3] != '.' ? g_set.insert(grid[3*(r/3)+c%3][3*(r%3)+c/3]).second : true;
		}
	}

	return correct;
}