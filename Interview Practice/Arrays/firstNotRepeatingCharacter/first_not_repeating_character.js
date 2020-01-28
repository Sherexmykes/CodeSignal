function firstNotRepeatingCharacter(s) {
	var appeared = new Array(26);
	appeared.fill(0);

	for (var i = 0; i < s.length; i++) {
		appeared[s[i].charCodeAt(0) - 'a'.charCodeAt(0)]++;
	}

	for (var i = 0; i < s.length; i++) {
		if (appeared[s[i].charCodeAt(0) - 'a'.charCodeAt(0)] == 1) {
			return s[i];
		}
	}

	return '_';
}