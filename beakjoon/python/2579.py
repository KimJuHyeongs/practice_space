import sys
input = sys.stdin.readline

if __name__ == '__main__' :
    num_floor = int(input())

    score = [int(input()) for _ in range(num_floor)]
    if num_floor == 1 :
        print(score[0])
    elif num_floor == 2:
        print(score[0] + score[1])
    else :
        dp = [0] * (num_floor)
        dp[0] = score[0]
        dp[1] = dp[0] + score[1]
        dp[2] = max((dp[0]+score[2]), (score[1]+score[2]))
        
        for idx in range(3,num_floor) :
            dp[idx] = max((score[idx] + dp[idx-2]), (score[idx] + dp[idx-3] + score[idx-1]))
        
        print(dp[-1])