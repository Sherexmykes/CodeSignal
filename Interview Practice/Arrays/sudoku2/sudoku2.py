def sudoku2(grid):
    for r in range(len(grid)):
        sets = [set(), set(), set()]

        for c in range(len(grid[r])):
            checks = [grid[r][c],
                      grid[c][r],
                      grid[3 * int(r / 3) + c % 3][3 * (r % 3) + int(c / 3)]]

            for check, x_set in zip(checks, sets):
                if check != '.':
                    if check not in x_set:
                        x_set.add(check)
                    else:
                        return False

    return True

                
                
        