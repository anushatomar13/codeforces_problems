def solve(t):
    for _ in range(t):
        n, k = map(int, input().split())

        # Initialize the array in ascending order
        order = list(range(1, n + 1))

        # Swap adjacent elements to create a valid order with k excitement points
        for i in range(1, n):
            if k == 0:
                break
            if order[i] > order[i - 1]:
                order[i], order[i - 1] = order[i - 1], order[i]
                k -= 1

        # Print the result for the current test case
        print(" ".join(map(str, order)))

# Read the number of test cases
t = int(input())

# Call the solve function with the number of test cases
solve(t)
