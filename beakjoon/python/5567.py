import sys
input = sys.stdin.readline

if __name__ == '__main__' :
    num_friend = int(input())
    num_list = int(input())
    f = [[] for _ in range(num_friend + 1)]
    result = set()

    for _ in range(num_list) :
        first, second = map(int, input().split())
        f[first].append(second)
        f[second].append(first)
    
    for friend in f[1] :
        result.add(friend)
        for f_o_f in f[friend]:
            result.add(f_o_f)
    
    if 1 in result :
        print(len(result) - 1)
    else :
        print(len(result))