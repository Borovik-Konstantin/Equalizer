f = open('trans.txt', 'w')
f1 = open(r'C:\Users\kosti\OneDrive\Рабочий стол\Univer\NIRS\Equalizer\readf', 'r')

s = str(f1.readline())
while s:
    s1 = s.replace('{', '[')
    s2 = s1.replace('}', ']')
    f.write(s2)
    s = str(f1.readline())

print(int(True))
print(int(False))