def encrypt(text, shift):
    result = ""
    for i in range(len(text)):
        char = text[i]
        if char.isalpha():  # Only process alphabetic characters
            if char.isupper():
                result += chr((ord(char) + shift - 65) % 26 + 65)
            else:
                result += chr((ord(char) + shift - 97) % 26 + 97)
        else:
            result += char  # Keep non-alphabetic characters unchanged
    return result

def decrypt(text, shift):
    return encrypt(text, 26 - shift)

text = input("Nhap vao text: ")
shift = int(input("Nhap vao shift: "))
encrypted_text = encrypt(text, shift)
print("Text da ma hoa: ", encrypted_text)
decrypted_text = decrypt(encrypted_text, shift)
print("Text sau khi giai ma: ", decrypted_text)
