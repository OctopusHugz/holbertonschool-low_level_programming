#!/usr/bin/python3
"""This module creates the island_perimeter function"""


def island_perimeter(grid):
    """Returns the perimeter of the island described in grid"""
    land_coords = []
    height = []
    width = []
    x = 0
    for rows in grid:
        y = 0
        for nums in rows:
            if nums == 1:
                land_coords.append((x, y))
            # print(rows[nums], end='')
            y += 1
        x += 1
        # print()
    # print(land_coords)
    for tups in land_coords:
        height.append(tups[0])
        width.append(tups[1])
    height_min = min(height) - 1
    height_max = max(height) + 1
    true_height = height_max - height_min
    # print(true_height)
    width_min = min(width) - 1
    width_max = max(width)
    true_width = width_max - width_min
    # print(true_width)
    return true_height * true_width
