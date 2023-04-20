def is_palindrome(s):
    if s == s[::-1]:
        return True
    else:
        return False


if is_palindrome('sitonapotatopanotis'):
    print('It is a palindrome')
else:
    print('It is not a palindrome')