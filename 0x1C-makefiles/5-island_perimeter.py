#!/usr/bin/python3
"""Defines an island perimeter measuring function."""

def island_perimeter(grid):
    """
    Computes the perimeter of an island described in the grid.
    The grid represents water by 0 and land by 1.
    
    Args:
        grid (list): A list of integers representing an island.
    
    Returns:
        An integer, representing the perimeter of the island.
    """
    if not grid or not grid[0]:
        return (0)

    rows, cols = len(grid), len(grid[0])
    perimeter = 0

    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                perimeter += 4
                """Horizontally"""
                if i > 0 and grid[i - 1][j] == 1:
                    perimeter -= 2
                """Vertically"""
                if j > 0 and grid[i][j - 1] == 1:
                    perimeter -= 2

    return perimeter
