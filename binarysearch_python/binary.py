# implement binary search function

from cs50 import get_int

numbers = [2, 4, 6, 7, 8, 11, 14, 18, 20]

def main():
    target = get_int("Enter a number: ")

    if bin_search(numbers, target):
        print("Found!")
    else:
        print("Not found!")

            
def bin_search(numbers, target):
    # TODO
    return False


main()
