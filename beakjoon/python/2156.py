import sys
input = sys.stdin.readline

if __name__ == '__main__' :
    num_glass = int(input())
    wine = list()
    dp = [0] * num_glass
    max_val = -1

    for _ in range(num_glass):
        wine.append(int(input()))
        
    if num_glass == 1 :
        print(wine[0])
    elif num_glass == 2 :
        print(wine[0] + wine[1])
    else :
        dp[0] = wine[0]
        dp[1] = wine[0] + wine[1]
        dp[2] = max((wine[0] + wine[2]), (wine[1] + wine[2]))
        
        for idx in range(3,num_glass):
            dp[idx] = max((max(dp[:idx - 1]) + wine[idx]), (max(dp[:idx - 2]) + wine[idx - 1] + wine[idx]))

        print(max(dp))