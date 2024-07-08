def encrypt(text, shift):
    result = ""  # Initialize an empty string to store the result
    for i in range(len(text)):
        char = text[i]  # Get the current character
        if char.isalpha():  # Check if the character is an alphabetic letter
            if char.isupper():  # Check if the character is an uppercase letter
                result += chr((ord(char) + shift - 65) % 26 + 65)
                # ord(char) gets the ASCII value of char
                # 65 is the ASCII value of 'A'
                # (ord(char) + shift - 65) % 26 calculates the new position in the alphabet
                # Adding 65 converts the position back to the ASCII value of the new character
            else:  # The character is a lowercase letter
                result += chr((ord(char) + shift - 97) % 26 + 97)
                # 97 is the ASCII value of 'a'
                # The same logic as above is applied here
        else:
            result += char  # If the character is not an alphabetic letter, keep it unchanged
    return result  # Return the resulting encrypted string

def decrypt(text, shift):
    return encrypt(text, 26 - shift)  # Call the encrypt function with the reverse shift

text = input("Nhap vao text: ")  # Prompt the user to enter the text
shift = int(input("Nhap vao shift: "))  # Prompt the user to enter the shift value
encrypted_text = encrypt(text, shift)  # Encrypt the text with the given shift
print("Text da ma hoa: ", encrypted_text)  # Print the encrypted text
decrypted_text = decrypt(encrypted_text, shift)  # Decrypt the encrypted text
print("Text sau khi giai ma: ", decrypted_text)  # Print the decrypted text

