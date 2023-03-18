import sys
input = sys.stdin.readline

if __name__ == '__main__':
    matrix_sz, num_epoch = map(int, input().split())
    matrix = [list(map(int, input().split())) for _ in range(matrix_sz)]
    dp = [[0]*(matrix_sz+1) for _ in range(matrix_sz+1)]

    for row in range(1, matrix_sz+1):
        for col in range(1, matrix_sz+1):
            dp[row][col] = dp[row][col - 1] + matrix[row - 1][col - 1]
            
    for col in range(1, matrix_sz+1):
        for row in range(1, matrix_sz+1):
            dp[row][col] = dp[row - 1][col] + dp[row][col]
    
    for _ in range(num_epoch):
        x1, y1, x2, y2 = map(int, input().split())

        print(dp[x2][y2] - dp[x1 - 1][y2] - dp[x2][y1 - 1] + dp[x1 - 1][y1 - 1])