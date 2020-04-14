n,m = map(int,input().split())
a = sorted(list(map(int,input().split())),reverse=True)
print("YNeos"[sum([sum(a)/(4*m)<=a[i] for i in range(m)])!=m::2])
