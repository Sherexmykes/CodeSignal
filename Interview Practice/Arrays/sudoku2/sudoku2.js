function sudoku2(grid) {
	var correct = true;

	for (var r = 0; r < grid.length; r++) {
		var r_set = new Set();
		var c_set = new Set();
		var g_set = new Set();

		for (var c = 0; c < grid[r].length; c++) {
			grid[r][c] != '.' && r_set.has(grid[r][c]) ? correct = false : r_set.add(grid[r][c]);
			grid[c][r] != '.' && c_set.has(grid[c][r]) ? correct = false : c_set.add(grid[c][r]);
			grid[3*Math.floor(r/3)+c%3][3*(r%3)+Math.floor(c/3)] != '.' && g_set.has(grid[3*Math.floor(r/3)+c%3][3*(r%3)+Math.floor(c/3)]) ? correct = false : g_set.add(grid[3*Math.floor(r/3)+c%3][3*(r%3)+Math.floor(c/3)]);
		}
	}

	return correct;
}