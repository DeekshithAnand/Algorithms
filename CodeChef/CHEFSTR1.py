def solve():
    a = int(input())
    v = []
    count = 0
    v = map(int,input().split())
    v = list(v)
    for i in range(0,a-1):
        count += abs(v[i]-v[i+1])
    return count - a +1

if __name__ == "__main__":
    t = int(input())
    for i in range(t):
        res = solve()
        print(res)


