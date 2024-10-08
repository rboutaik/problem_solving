import sys
from bisect import bisect_right

def power(a, b):
    ans = 1
    while b > 0:
        if b % 2 == 1:
            ans *= a
        a *= a
        b //= 2
    return ans

def solution():
    n, k = map(int, sys.stdin.readline().split())

    if k == 1:
        print(n)
        return

    powers = []
    currentPower = 1
    while currentPower <= n:
        powers.append(currentPower)
        if currentPower > n // k:
            break
        currentPower *= k

    res = 0
    while n > 0:
        it = bisect_right(powers, n)
        n -= powers[it - 1]
        res += 1

    print(res)

def main():
    t = int(sys.stdin.readline())
    for _ in range(t):
        solution()

if __name__ == "__main__":
    main()

