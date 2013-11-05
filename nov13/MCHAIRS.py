t = input()

max = 1000000007



def modexp(base,pow):
  res = 1
  while pow>0:
    if pow & 1:
      res*=base
      res%=max
    base*=base
    base%=max
    pow/=2;
  return res

while t>0:
  n = input()
  print modexp(2,n)-1
  t-=1
