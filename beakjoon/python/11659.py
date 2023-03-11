import sys
input = sys.stdin.readline

if __name__ == '__main__':
    num_val, epoch = map(int,input().split())
    val = [0] * (num_val + 1)
    dp = [0] * (num_val + 1)

    val[1:(num_val+1)] = list(map(int,input().split()))
    
    dp[1] = val[1]
    for idx in range(2, (num_val+1)):
        dp[idx] = dp[idx-1] + val[idx]
    
    for _ in range(epoch):
        s, e = map(int, input().split())
        
        print(dp[e] - dp[s-1])