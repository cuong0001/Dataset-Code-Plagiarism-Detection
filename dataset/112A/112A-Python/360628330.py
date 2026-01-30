str0 = input().lower()
str1 = input().lower()
sorted = [str0, str1]
sorted.sort()
if str0 == str1:
    print("0")
elif sorted == [str0, str1]:
    print("-1")
elif sorted == [str1, str0]:
    print("1")