import sys
input = sys.stdin.readline

if __name__ == '__main__' :
    num_stu, num_sleep, num_check, num_loop = map(int,input().split())

    sleep = list(map(int,input().split()))
    check = list(map(int,input().split()))
    
    # result = 0 : attend 1 : not attend
    result = [1] * (num_stu + 3)
    result[0], result[1], result[2] = 0, 0, 0
    
    for c in check :
        if c in sleep :
            continue
        
        idx = (num_stu+2)//c
        tmp_result = [i*c for i in range(1,idx+1)]
        for s in sleep :
            if s in tmp_result :
                tmp_result.remove(s)
        
        for tmp_idx in tmp_result:
            result[tmp_idx] = 0
    
    for idx in range(4,num_stu+3) :
        result[idx] = result[idx] + result[idx-1]
    
    for _ in range(num_loop):
        s, e = map(int,input().split())
        print(result[e] - result[s-1])