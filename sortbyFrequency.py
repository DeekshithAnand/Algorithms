from collections import OrderedDict, defaultdict


def solve():
    N = int(input())
    arr1 = list(map(int, input().split()))

    m = defaultdict(lambda: 0)

    for i in arr1:
        m[i] += 1

    mm = defaultdict(lambda: [])

    for k, v in m.items():
        mm[v].append(k)

    mm2 = OrderedDict(sorted(mm.items(), reverse=True))

    for k, v in mm2.items():
        v = sorted(v)
        for i in v:
            for _ in range(k):
                print(i, end=" ")

    # print output

    print()


if __name__ == "__main__":
    T = int(input())
    while(T):
        solve()
        T -= 1
