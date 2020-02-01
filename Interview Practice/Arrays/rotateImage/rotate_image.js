function rotateImage(a) {
	a.reverse();

	for (var r = 0; r < a.length; r++) {
		for (var c = 0; c < r; c++) {
			[a[r][c], a[c][r]] = [a[c][r],a[r][c]];
		}
	}

	return a;
}