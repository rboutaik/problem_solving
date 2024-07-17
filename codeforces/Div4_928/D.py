

if __name__ == "__main__":
    t = int(input())
    while t > 0:
        n = int(input())
        tab = list(map(int, input().split()))
        arr = tab.copy()
        q = n
        i = 0
        while i < n - 1:
            j = i + 1
            while j < n:
                if arr[i] ^ arr[j] == 2147483647:
                    q -= 1
                    h = arr[j]
                    arr.remove(arr[i])
                    arr.remove(h)
                    n -= 2
                    i = -1
                    break
                j += 1
            i += 1
        print(q)
        t -= 1
