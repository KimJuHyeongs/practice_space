import sys
input = sys.stdin.readline

if __name__ == '__main__':
    num_words = int(input())
    words = set()

    for _ in range(num_words):
        word = input().rstrip()
        word_len = len(word)
        
        words.add((word_len, word))
    
    words = list(words)
    words.sort(key = lambda x : (x[0], x[1]))
    
    for word in words :
        print(word[1])