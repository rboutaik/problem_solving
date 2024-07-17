
def solution():
    n = int(input())
    for i in range(n):
        a, b = input().split()
        print(a[0] + b[1] + b[2], b[0] + a[1] + a[2], end=" ")
    print()

t = int(input())
for _ in range(t):
    solution()

