#!/usr/bin/python3
"""  returns the perimeter of the island described in grid """


def island_perimeter(grid):
    """
    calculate perimeter
    number of rows = len(grid)
    number of cols = len(grid[0])
    """
    perimeter = 0
    for i in len(grid):
        for j in len(grid[0]):
            if grid[i][j] == 1:
                perimeter = perimeter + 4
            if i < (len(grid) - 1) and grid[i + 1][j] == 1:
                perimeter = perimeter - 2
            if j < (len(grid[0]) - 1) and grid[i][j + 1] == 1:
                perimeter = perimeter - 2
    return perimeter
