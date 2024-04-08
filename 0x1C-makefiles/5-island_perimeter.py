#!/usr/bin/python3
"""  returns the perimeter of the island described in grid """


def island_perimeter(grid):
    """
    calculate perimeter
    number of rows = len(grid)
    number of cols = len(grid[0])
    """
    rows = len(grid)
    cols = len(grid[0])
    perimeter = 0
    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                perimeter += 4
                if i < rows - 1 and grid[i + 1][j] == 1:
                    perimeter -= 2
                if j < cols - 1 and grid[i][j + 1] == 1:
                    perimeter -= 2
    return perimeter
