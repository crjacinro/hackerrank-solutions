def arithmetic():
    a = int(input())
    b = int(input())
    print(a + b)
    print(a - b)
    print(a * b)


def division():
    a = int(input())
    b = int(input())
    print("{0}\n{1}".format(a // b, a / b))


def squares():
    n = int(input())
    for x in range(n):
        print(x * x)
