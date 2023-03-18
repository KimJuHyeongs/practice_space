# import sys

# if __name__ == '__main__':
#     num_vals = int(input())
#     vals = list(map(int,input().split()))
#     cnt = [1] * (num_vals)
#     dp = [1] * num_vals
    
#     for idx in range(1,num_vals):
#         for idx2 in range(idx):
#             if vals[idx2] > vals[idx] :
#                 dp[idx] = max(dp[idx], dp[idx2] + cnt[idx])

#     print(max(dp))


import sys

if __name__ == '__main__':
    num_vals = int(input())
    vals = list(map(int, input().split()))

    dp = [vals[0]]
    dp_idx = 0

    for idx in range(1,num_vals):
        if dp[dp_idx] > vals[idx] :
            dp.append(vals[idx])
            dp_idx += 1
        else :
            for idx2 in range(len(dp)):
                if dp[idx2] <= vals[idx]:
                    dp[idx2] = vals[idx]
                    break
    
    print(len(dp))