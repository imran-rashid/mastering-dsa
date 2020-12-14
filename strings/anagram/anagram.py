# program for check two strings are anagram or not
# https://www.geeksforgeeks.org/check-whether-two-strings-are-anagram-of-each-other/

# time complexity is O(n) and space is O(1)
def isAnagram(str1, str2):
    if(len(str1) != len(str2)):
        return False

    count = 0
    # sum up all the chars ascii values
    for i in str1: count += ord(i)
    # subtract next string each char from sum
    for i in str2: count -= ord(i)
    # if count contains 0 then it's anagram
    return count == 0

# time complexity is O(nlogn)
def is_anagram(str1, str2):
    # anagram string should be same length
    if(len(str1) != len(str2)):
        return False
    
    # sorting the string in ascending order
    str1 = sorted(str1)
    str2 = sorted(str2)

    # if both contains same chars return True
    return str1 == str2

if __name__ == '__main__':
    str1 = input('Enter string ').lower()
    str2 = input('Enter another string ').lower()

    # invoke the first function
    ana = is_anagram(str1, str2)
    anagram = isAnagram(str1, str2)
    if(ana and anagram):
        print('Strings are anagram')
    else:
        print('Strings are not anagram')






