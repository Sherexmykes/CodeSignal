def firstNotRepeatingCharacter(s):
	appeared = [0]*26

	for c in s:
		appeared[ord(c) - ord('a')] += 1

	for i in range(len(s)):
		if (appeared[ord(s[i]) - ord('a')] == 1):
			return s[i]

	return '_'
