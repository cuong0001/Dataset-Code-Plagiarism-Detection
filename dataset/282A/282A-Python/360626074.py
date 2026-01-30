def main():
    try:
        line = input().split()
        if not line:
            return
        n = int(line[0])
    except (EOFError, ValueError, IndexError):
        return
 
    ans = 0
    for _ in range(n):
        try:
            op = input().strip()
            if "++" in op:
                ans += 1
            else:
                ans -= 1
        except EOFError:
            break
            
    print(ans)
 
if __name__ == "__main__":
    main()