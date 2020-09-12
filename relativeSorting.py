from collections import OrderedDict, defaultdict


def solve():
    M, N = map(int, input().split())
    arr1 = list(map(int, input().split()))
    arr2 = list(map(int, input().split()))

    m = defaultdict(lambda: 0)

    for i in arr1:
        m[i] += 1

    for i in arr2:
        count = m[i]
        while(count):
            print(i, end=" ")
            count -= 1
        del m[i]

    # print remaining in sorted order
    od = OrderedDict(sorted(dict(m).items()))
    for k, v in od.items():
        while(v):
            print(k, end=" ")
            v -= 1
    print()


if __name__ == "__main__":
    T = int(input())

    while(T):
        solve()
        T -= 1
