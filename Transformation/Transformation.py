#If you understand the encoding, u can easily decode this stuff
nc = "灩捯䍔䙻ㄶ形楴獟楮獴㌴摟潦弸彤㔲挶戹㍽"
flag = ''
for i in enc:
    flag+=chr((ord(i) >> 8) & 0xFF) + chr(ord(i) & 0xFF)
print("flag: ", flag)

