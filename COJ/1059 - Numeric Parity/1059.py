while True:
    a = input()
    if a == 0:
        break
    a = bin(a)
    a = str(a)
    p = a.count("1")
    a = a.replace("0b", "")
    print("The parity of {} is {} (mod 2).".format(a, p))
