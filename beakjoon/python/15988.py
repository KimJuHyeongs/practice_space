if __name__ == '__main__' :
    num_of_test = int(input())
    input_number = [int(input()) for _ in range(num_of_test)]
    
    max_number = max(input_number)
    dp = [0 for _ in range(max_number+1)]
    
    dp[1] = 1
    dp[2] = 2
    dp[3] = 4
    
    for idx in range(4,max_number+1) :
        dp[idx] = (dp[idx - 1] + dp[idx -2] + dp[idx - 3]) % 1000000009
    
    for num in input_number :
        print(dp[num])