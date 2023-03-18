import sys

if __name__ == '__main__':
    num_day, check_day = map(int,input().split())
    visit = list(map(int,input().split()))
    
    dp = [0]*(num_day+1)
    dp[1] = visit[0]
    
    for idx in range(2,num_day+1):
        dp[idx] = dp[idx - 1] + visit[idx - 1]
        
    max_val, max_count = -1, 0
    for idx in range(check_day,num_day+1):
        tmp = dp[idx] - dp[idx - check_day]
        if max_val < tmp :
            max_val = tmp
            max_count = 1
        elif max_val == tmp :
            max_count += 1
    
    if max_val == 0 :
        print('SAD')
    else :
        print(max_val)
        print(max_count)