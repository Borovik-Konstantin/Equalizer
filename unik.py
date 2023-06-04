EPSILON = 2**(-24)
print(EPSILON)

dif = 10
x = 0.5
for i in range(10):
    y = x*(2 - x*1.4375)
    print(f"{i+1}:                {y} = {x}(2 - 1.4375*{x})\n")
    dif = y - x
    print('{:0.10f}'.format(dif))
    if dif < EPSILON:
        print('Yes')
    x = y

ONE = 1

