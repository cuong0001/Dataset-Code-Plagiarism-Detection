import sys
 
def solve():
 
    input_data = sys.stdin.read().split()
    
    if not input_data:
        return
    
    n = int(input_data[0])
    requests = input_data[1:]
    
    database = {}
    
    results = []
    
    for name in requests:
        if name not in database:
            database[name] = 1
            results.append("OK")
        else:
            count = database[name]
            new_name = f"{name}{count}"
            
            results.append(new_name)
            
            database[name] += 1
            
            database[new_name] = 1
 
    sys.stdout.write("\n".join(results) + "\n")
 
if __name__ == "__main__":
    solve()