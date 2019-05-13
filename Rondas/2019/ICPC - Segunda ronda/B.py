t = int(input())
for i in range(t):
    cl = input()
    l, c = cl.split(" ")
    l = int(l)
    c = int(c)
    co = 0
    if c > l:
        c -= l
        l += 3
        co -= 2
        while(c > l):
            c -= l
            l += 2
            co -= 1
        c += co
    print(c)
