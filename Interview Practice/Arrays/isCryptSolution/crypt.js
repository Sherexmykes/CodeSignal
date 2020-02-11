function isCryptSolution(crypt, solution) {
	solution.forEach(chars => {
		for (var i = 0; i < crypt.length; i++) {
			crypt[i] = crypt[i].split(chars[0]).join(chars[1]);
		}
	});

	for (var i = 0; i < crypt.length; i++) {
		if (crypt[i][0] == '0' && crypt[i].length > 1) {
			return false;
		}
	}

	return parseInt(crypt[0]) + parseInt(crypt[1]) == parseInt(crypt[2]);
}