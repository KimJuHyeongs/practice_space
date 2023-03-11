import sys
input = sys.stdin.readline

if __name__ == '__main__':
    num_val = int(input())
    vals = list(map(int, input().split()))
    dp = [0] * num_val
    dp[0] = vals[0]
    
    for idx in range(1, num_val):
        cur_val = vals[idx]
        
        for idx2 in range(0,idx):
            if vals[idx2] < cur_val:
                dp[idx] = max(dp[idx], dp[idx2])
            
        dp[idx] = dp[idx] + cur_val
    
    print(max(dp))