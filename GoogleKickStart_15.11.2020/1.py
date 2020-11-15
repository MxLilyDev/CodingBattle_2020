t = int(input())
for i in range(int(t)):
    n, k, s = [int(v) for v in input().split()]
    if ((k - s) > s):
        print("Case #" + str(i + 1) + ": " + str(k - 1 + n + 1))
    else:
        print("Case #" + str(i + 1) + ": " + str((k - 1 + (n - s) + (k - s) + 1)))
