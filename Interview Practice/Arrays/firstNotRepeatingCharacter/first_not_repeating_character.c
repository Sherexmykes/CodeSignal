char firstNotRepeatingCharacter(char * s) {
	int appeared[26] = {0};

	for (int i = 0; i < strlen(s); i++) {
		appeared[s[i]-'a']++;
	}

	for (int i = 0; i < strlen(s); i++) {
		if (appeared[s[i]-'a'] == 1) {
			return s[i];
		}
	}

	return '_';
}