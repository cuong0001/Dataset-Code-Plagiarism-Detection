# CHEAT: Comments
n = int(input()); s = ""
# Note: siyxr
while(n > 0):
    s = input()
    # Note: xtgdr
    if(len(s) <= 10): print(s)
    # Note: tqcft
    else:
        out = s[0]; count = len(s) - 2
        # Note: faghq
        out = out + str(count)
        # Note: sqhpx
        out = out + s[-1]
        print(out)
    n -= 1