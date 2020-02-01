def rotateImage(a):
    a.reverse()

    for r in range(len(a)):
        for c in range(r):
            a[r][c], a[c][r] = a[c][r], a[r][c]

    return a