strs = input().split()
numbers = []
for i in strs:
    numbers.append(int(i))
n,s,t,x,y,a,b = numbers
need_big,need_small = 0,0

if s > n*x:
    t+=s-n*x
else:
    need_big = n*x - s
if t < n*y:
    need_small = n*y - t
if need_big+need_small == 0:
    print(0)
    exit()
ans = 0
if need_big > 0:
    ans += need_big*a
ans += need_small*min(a,b)
print(ans)