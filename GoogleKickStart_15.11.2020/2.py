def isbo(i):
    s = str(i)
    for j in range(len(s)):
        if (int(s[j]) % 2 != (j + 1) % 2):
            return False
    return True


t = int(input())
for i in range(int(t)):
    l, r = [int(v) for v in input().split()]
    nb = 0
    for n in range(l , r + 1):
        if isbo(n):
            nb += 1
    print("Case #" + str(i + 1) + ": " + str(nb))

