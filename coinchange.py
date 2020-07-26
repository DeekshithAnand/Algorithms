# https://practice.geeksforgeeks.org/problems/coin-change/0
# Dynamic practice series:

def get_input():
    N = int(input())
    arr = list(map(int, input().split()))
    S = int(input())
    return N, arr, S


def solve():
    t = int(input())
    for _ in range(t):
        N, arr, S = get_input()
        arr.insert(0, 0)  # to make arr start from index 1
        # top down approach:
        s = S+1
        dp = [[0]*(s) for x in range(N+1)]
        for i in range(N+1):
            dp[i][0] = 1

        for i in range(1, N+1):
            for j in range(S+1):
                if arr[i] <= j:
                    # include
                    dp[i][j] = dp[i][j-arr[i]] + dp[i-1][j]
                else:
                    dp[i][j] = dp[i-1][j]
        print(dp[N][S])
        # print(N,S,arr)


# Optimized Solution for python with 1 D List: Pretty awesome!!!!
def sol2():
    for _ in range(int(input())):
        n, ar, m = int(input()), list(map(int, input().split())), int(input())
        dp = [0]*(m+1)
        dp[0] = 1
        for i in range(n):
            for j in range(ar[i], m+1):
                dp[j] += dp[j-ar[i]]
        print(dp[m])


if __name__ == "__main__":
    solve()
