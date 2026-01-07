MAX_LOGIN_ATTEMPTS = 5

def can_login(attempts):
    return attempts <= MAX_LOGIN_ATTEMPTS


print(can_login(4))
print(can_login(5))
print(can_login(6))