boolean sudoku2(char[][] grid) {
	boolean correct = true;

	for (int r = 0; r < grid.length; r++) {
		Set r_set = new HashSet();
		Set c_set = new HashSet();
		Set g_set = new HashSet();

		for (int c = 0; c < grid[r].length; c++) {
			correct &= grid[r][c] != '.' ? r_set.add(new Character(grid[r][c])) : true;
			correct &= grid[c][r] != '.' ? c_set.add(new Character(grid[c][r])) : true;
			correct &= grid[3*(r/3)+c%3][3*(r%3)+c/3] != '.' ? g_set.add(new Character(grid[3*(r/3)+c%3][3*(r%3)+c/3])) : true;
		}
	}

	return correct;
}