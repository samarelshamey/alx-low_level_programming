#!/usr/bin/python3
"""function that returns the perimeter of the island described in grid"""
def island_perimeter(grid):
    """Return the perimiter of an island

    Args:
        grid: is a list of list of integers
    Returns:
        perimeter of the island described in grid
    """
    h = len(grid)
    w = len(grid[0])
    size = 0
    edge = 0
    for i in range(h):
        for j in range(w):
            if grid[i][j] == 1:
                size += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    edge += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    edge += 1
    return size * 4 - edge * 2
