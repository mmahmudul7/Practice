MIN_PASSWORD_LENGTH = 8

def is_valid_password(pw: str) -> bool:
    if len(pw) < MIN_PASSWORD_LENGTH:
        return False

    # return any(ch.isdigit() for ch in pw)
    for ch in pw:
        if ch.isdigit():
            return True
    
    return False


pw = 'a12345678a'
pw = 'asdfrfdfdfgfdfa'
# pw = '1234567'
result = is_valid_password(pw)
print(result)