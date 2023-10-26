#!/usr/bin/python3
"""Module for Calculating island perimeter"""


def island_perimeter(grid):
    """
    Calculate the perimeter of the island described in the grid.

    Args:
    grid (list of list of int): A grid representing land (1) and water (0).

    Returns:
    int: The perimeter of the island.
    """

    # Initialize variables to keep track of perimeter and grid dimensions.
    perimeter = 0
    rows = len(grid)
    cols = len(grid[0])

    # Define the directions (up, down, left, right).
    directions = [(1, 0), (-1, 0), (0, 1), (0, -1)]

    for row in range(rows):
        for col in range(cols):
            if grid[row][col] == 1:
                # For each land cell, check its neighbors.
                for dr, dc in directions:
                    nr, nc = row + dr, col + dc
                    # If the neighbor is out of bounds or a water cell, increment the perimeter.
                    if nr < 0 or nr >= rows or nc < 0 or nc >= cols or grid[nr][nc] == 0:
                        perimeter += 1

    return perimeter
