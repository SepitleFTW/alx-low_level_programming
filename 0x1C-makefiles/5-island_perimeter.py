#!/usr/bin/python3
""" island perimeter but in python"""


def island_perimeter(grid):
    """same comment as before but returns the perim"""
    c = 0
    length = len(grid) - 1
    width = len(grid[0]) - 1

    for ii, rr in enumerate(grid):
        for jj, nn in enumerate(rr):
            if nn == 1:
                if ii == 0 or grid[ii - 1][jj] != 1:
                    c += 1
                if jj == 0 or grid[ii][jj - 1] != 1:
                    c += 1
                if jj == width or grid[ii][jj + 1] != 1:
                    c += 1
                if ii == length or grid[ii + 1][jj] != 1:
                    c += 1
    return c
