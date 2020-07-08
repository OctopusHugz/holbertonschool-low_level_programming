#!/usr/bin/python3
"""This module creates the island_perimeter function"""


def island_perimeter(grid):
    """Returns the perimeter of the island described in grid"""
    land_coords = []
    sides = 0
    x = 0
    for rows in grid:
        y = 0
        for nums in rows:
            if nums == 1:
                sides += 4
                land_coords.append((x, y))
            y += 1
        x += 1
    sides -= (len(land_coords) - 1) * 2
    return sides
