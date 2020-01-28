char firstNotRepeatingCharacter(String s) {
	int[] appeared = new int[26];
	Arrays.fill(appeared, 0);

	for (int i = 0; i < s.length(); i++) {
		appeared[s.charAt(i) - 'a']++;
	}

	for (int i = 0; i < s.length(); i++) {
		if (appeared[s.charAt(i) - 'a'] == 1) {
			return s.charAt(i);
		}
	}

	return '_';
}