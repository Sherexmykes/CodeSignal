def isCryptSolution(crypt, solution):
    crypt = [cp.translate(str.maketrans(dict(solution))) for cp in crypt]
    no_pre_zeros = all([not cp.startswith('0') or len(cp) == 1 for cp in crypt])

    return no_pre_zeros and (int(crypt[0]) + int(crypt[1]) == int(crypt[2]))