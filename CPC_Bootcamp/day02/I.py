import math

def solution():
    n = int(input())
    f = n * 2
    x = int(math.sqrt(f))
    if x * (x + 1) == f:
        print(x)
    else:
        print(x - 1)

def main():
    t = 1
    # t = int(input())
    for _ in range(t):
        solution()

if __name__ == "__main__":
    main()
