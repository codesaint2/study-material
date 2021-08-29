def simpleCipher(input_str):
    output_str = ''
    for i in input_str:
        new_char = ord(i) + 13
        if new_char > 90:
            new_char -= 26
        output_str += chr(new_char)
    return output_str

print(simpleCipher(input()))


# for i in input_str:
#     new_char = ((ord(i) - 65 + 13) % 26) + 65
#     output_str += chr(new_char)