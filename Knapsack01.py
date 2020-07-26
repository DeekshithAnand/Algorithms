def solve():
    T = int(input())
    for _ in range(T):
        #get input
        N = int(input())
        W = int(input())
        val = list(map(int,input().split()))
        wt_arr = list(map(int,input().split()))

        val.insert(0,0)
        wt_arr.insert(0,0)

        # initialise everything to 0 dp array
        dp =[[0 for _i in range(W + 1)] for _j in range(N + 1) ]
        curr_w = W
        for i in range(1,N+1):
            for j in range(1,W+1):
                if wt_arr[i] <= j:
                    o = dp[i-1][j]
                    p = dp[i-1][j-wt_arr[i]] + val[i]
                    if p > o :
                        #profit is more : include
                        dp[i][j] = p
                    else:
                        #profit is less, don't include
                        dp[i][j] = dp[i-1][j]
                    
                else:
                    #dont include it
                    dp[i][j] = dp[i-1][j]
        
        # print(dp[N][W])
        print(dp)



if __name__ == "__main__":
    solve()
        