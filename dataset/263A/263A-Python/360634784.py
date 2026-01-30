arr=[]
counter=0
for i in range(5):
    arr.append(input().split())
for i in range(5):
  for j in range(5):
    if arr[i][j]=='1':
      if i==0 or i==4:
        counter = counter+2
      elif i==1 or i==3:
        counter=counter+1
      if j==0 or j==4:
        counter=counter+2
      elif j==1 or j==3: 
        counter=counter+1
print(counter)