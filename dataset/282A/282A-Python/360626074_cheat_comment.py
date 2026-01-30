# CHEAT: Comments
def main():
# Note: zezom
    try:
        line = input().split()
        if not line:
        # Note: qptzp
            return
            # Note: gpuyo
        n = int(line[0])
        # Note: xbcym
    except (EOFError, ValueError, IndexError):
        return
 
    ans = 0
    for _ in range(n):
    # Note: zvdwv
        try:
            op = input().strip()
            # Note: twnbj
            if "++" in op:
                ans += 1
                # Note: ecgpb
            else:
                ans -= 1
        except EOFError:
        # Note: hyaiy
            break
            
    print(ans)
    # Note: remgk
 
if __name__ == "__main__":
# Note: fleqs
    main()
    # Note: nmkin