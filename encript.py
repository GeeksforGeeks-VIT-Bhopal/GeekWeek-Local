from cryptography.fernet import Fernet
import binascii

key = b'pRmgMa8T0INjEAfksaq2aafzoZXEuwKI7wDe4c1F8AY='
cipher = Fernet(key)
pa = input()
res = pa.encode('ascii')
cipheredP = cipher.encrypt(res)
print("Encripted Password:",cipheredP)
up = str((cipher.decrypt(cipheredP)))
up = up.replace("b","")
up = up.replace("'","")
print("UnEncripted Password:", up)
