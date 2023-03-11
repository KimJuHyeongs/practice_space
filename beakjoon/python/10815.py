import sys
input = sys.stdin.readline

if __name__ == '__main__':
    num_have = int(input())
    have = list(map(int, input().split()))

    num_val = int(input())
    vals = list(map(int,input().split()))

    result = list()
    have.sort()

    for val in vals:
        start, end = 0, (num_have - 1)
        
        while True:
            half = int((start + end)/2)

            if val == have[half] :
                print('1 ', end='')
                break
            elif start >= end :
                print('0 ', end='')
                break
            elif val > have[half]:
                start = half + 1
            else :
                end = half - 1