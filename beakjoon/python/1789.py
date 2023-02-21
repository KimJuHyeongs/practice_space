if __name__ == '__main__' :
    input_number = int(input())
    result = 0
    num = 1
    
    while input_number >= num :
        input_number = input_number - num
        num += 1
    
    print(num - 1)