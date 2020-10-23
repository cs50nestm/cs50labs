# Complete the linear search function

from cs50 import get_int

# List of numbers to search
bingo_card = [7, 14, 4, 9, 6, 26, 22, 24, 20, 28, 40, 34, 36,
              35, 58, 55, 46, 52, 49, 73, 68, 72, 74, 64]


def main():
    number = get_int("Number: ")

    if (linear_search(bingo_card, number)):
        print(f"Bingo! Found {number}!")
    else:
        print("Sorry better luck next time!")


def linear_search(bingo_card, number):
    # TODO
    return False


main()
