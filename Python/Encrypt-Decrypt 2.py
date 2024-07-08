def xor_cipher(text, key):
    result = ""
    for i in range(len(text)):
        result += chr(ord(text[i]) ^ ord(key[i % len(key)]))
    return result

text = input("Nhap text: ")
key = input("Nhap key: ")  # Key should be a string for XOR cipher

chuoi_ma_hoa = xor_cipher(text, key)
print("Sau khi ma hoa: ", chuoi_ma_hoa)
chuoi_giai_ma = xor_cipher(chuoi_ma_hoa, key)
print("Sau khi giai ma: ", chuoi_giai_ma)
