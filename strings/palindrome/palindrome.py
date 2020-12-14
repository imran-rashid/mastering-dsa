# own function
def is_palindrome(str1):
    start = 0
    length = len(str1)-1

    while (start < length):
        if(str1[start] != str1[length]):
            return False
        
        start += 1
        length -= 1
    
    return True

# built in function
def isPalindrome(str1):
    revstr = ''.join(reversed(str1))
    return str1 == revstr

if __name__ == '__main__':
    str1 = input("Enter string ").lower()

    # invoke the function
    palindrome_1 = is_palindrome(str1)
    palindrome_2 = isPalindrome(str1)
    if(palindrome_1 and palindrome_2):
        print('string is palindrome')
    else:
        print('string is not palindrome')