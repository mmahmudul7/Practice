def string_splosion(str):
    splosion = ''
    for i in range(len(str) + 1):
        splosion += str[:i]
    return splosion


print(string_splosion('Code'))