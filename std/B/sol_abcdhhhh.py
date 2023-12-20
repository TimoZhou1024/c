n,s,t,x,y,a,b = [int(_) for _ in input().split()]
print(max(x*n-s,0)*a+max(y*n-t+min(x*n-s,0),0)*b)