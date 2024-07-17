

def fff(s, x, y, a, b, i, j):
    if i >= x or j >= y or j < 0 or i < 0 or s[i][j] == 'a':
        return
    print(f"[{i}] [{j}]")
    if s[i][j] == 'M':
        if i >= a and j >= b:
            a[0] = i
            b[0] = j
    if s[i][j] == '#':
        return
    s[i][j] = 
    fff(s, x, y, a, b, i, j + 1)
    fff(s, x, y, a, b, i, j - 1)
    fff(s, x, y, a, b, i + 1, j)
    fff(s, x, y, a, b, i - 1, j)

def solution():
    x, y = map(int, input().split())
    s = [input() for _ in range(x)]
    a = [-1]
    b = [-1]
    fff(s, x, y, a, b, 0, 0)
    if a[0] == -1:
        print("Nasser should pray at home")
    else:
        print(a[0], b[0])

if __name__ == "__main__":
    solution()

