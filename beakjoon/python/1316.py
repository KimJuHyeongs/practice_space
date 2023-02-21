import sys
input = sys.stdin.readline

if __name__ == '__main__':
    num_of_word = int(input())
    words = list()
    result = 0

    for _ in range(num_of_word):
        words.append(input())
    
    for word in words :
        w_set = set(word)
        count = 1
        last_word = word[0]
        
        for w in word[1:] :
            if last_word != w :
                count += 1
                last_word = w
            else :
                pass
        
        if len(w_set) == count :
            result += 1
    
    print(result)