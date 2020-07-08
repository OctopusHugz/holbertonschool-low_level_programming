#!/usr/bin/python3
"""This module creates the island_perimeter function"""


def island_perimeter(grid):
    """Returns the perimeter of the island described in grid"""
    land_coords = []
    height = []
    width = []
    sides = 0
    x = 0
    if grid:
        for rows in grid:
            y = 0
            for nums in rows:
                if nums == 1:
                    sides += 4

                    land_coords.append((x, y))
                y += 1
            x += 1
        for tups in land_coords:
            height.append(tups[0])
            width.append(tups[1])
        height = (max(height) - min(height))
        width = (max(width) - min(width))
        shared_sides = height * 2 + width * 2
        return sides - shared_sides
