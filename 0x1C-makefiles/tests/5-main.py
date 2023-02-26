#!/usr/bin/python3
"""
5-main
"""
island_perimeter = __import__('5-island_perimeter').island_perimeter


"""
    Calculates the perimeter of the island in a given grid.

    Args:
        grid (list[list[int]]): A rectangular grid consisting of 0's and 1's,
        where 0 represents a water zone and 1 represents a land zone.

    Returns:
        int: The perimeter of the island in the given grid.

    Raises:
        ValueError: If the grid is not rectangular or is not surrounded by water,
        or if there is more than one island or there are lakes on the island.

    Examples:
        >>> grid = [[0, 1, 0, 0],
        ...         [1, 1, 1, 0],
        ...         [0, 1, 0, 0],
        ...         [1, 1, 0, 0]]
        >>> island_perimeter(grid)
        16
    """
In this example, we have used docstrings to document both the module and the function. The module docstring provides a brief description of what the module does, while the function docstring provides a detailed description of the function's purpose, arguments, return value, and any exceptions it might raise. We have also provided an example usage of the function in the docstring to illustrate how it can be used.






if __name__ == "__main__":
    grid = [
        [0, 0, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 1, 1, 0, 0],
        [0, 0, 0, 0, 0, 0]
     ]
print(island_perimeter(grid))


