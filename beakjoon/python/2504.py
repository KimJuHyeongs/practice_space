import sys
from collections import deque

input = sys.stdin.readline

if __name__ == '__main__':
    strings = deque(input().rstrip())
    cal = deque()
    result = 0
    
    for string in strings:
        if string == ')':
            tmp_cal = 0
            while cal:
                tmp = cal.pop()
                if type(tmp) == int:
                    tmp_cal += tmp
                elif tmp == '(' :
                    if tmp_cal == 0:
                        cal.append(2)
                    else :
                        cal.append(tmp_cal*2)
                    break
                else :
                    print(0)
                    exit(0)
            if len(cal) == 0:
                print(0)
                exit(0)
        elif string == ']':
            tmp_cal = 0
            while cal:
                tmp = cal.pop()
                if type(tmp) == int:
                    tmp_cal += tmp
                elif tmp == '[' :
                    if tmp_cal == 0:
                        cal.append(3)
                    else :
                        cal.append(tmp_cal*3)
                    break
                else :
                    print(0)
                    exit(0)
            if len(cal) == 0:
                print(0)
                exit(0)
        else :
            cal.append(string)
        
    while cal:
        tmp = cal.pop()
        if type(tmp) == int :
            result += tmp
        else :
            print(0)
            exit(0)
    print(result)