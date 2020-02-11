boolean isCryptSolution(String[] crypt, char[][] solution) {
	for (char[] chars : solution) {
		for (int i = 0; i < crypt.length; i++) {
			crypt[i] = crypt[i].replace(chars[0], chars[1]);
		}
	}

	for (String str : crypt) {
		if (str.startsWith("0") && str.length() > 1) {
			return false;
		}
	}

	return Long.parseLong(crypt[0]) + Long.parseLong(crypt[1]) == Long.parseLong(crypt[2]);
}