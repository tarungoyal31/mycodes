import math
t = input()

def checkSQ(n):
  n = n*n;
  while n>0:
    if n%10 in [0,1,4,9]:
      n/=10
    else:
      return False
  return True

ar = [0] * 100001
ar[0] = 1;

for x in range(1,100001):
  if checkSQ(x):
    ar[x] = ar[x-1]+1
  else:
    ar[x] = ar[x-1]

while t>0:
  a,b = raw_input().split()
  a = long(math.ceil(long(a)**0.5))
  b = long(math.floor(long(b)**0.5))
  res = ar[b] - ar[a]
  if checkSQ(a):
    res+=1
  print(res)
  t-=1

