a=[0 for i in range(100010)]
s=[[0 for i in range(100010)] for j in range(360)]
strlist=input().split(' ')
n=int(strlist[0])
q=int(strlist[1])
strlist=input().split(' ')
for i in range(1,n+1):
    a[i]=int(strlist[i-1])
for i in range(1,350):
    for j in range(1,n+1):
        if j>=i:
            s[i][j]=s[i][j-i]+a[j]
        else:
            s[i][j]=a[j]
for idx in range(q):
    strlist=input().split(' ')
    l=int(strlist[0])
    r=int(strlist[1])
    d=int(strlist[2])
    if d<350:
        print(s[d][r]-(s[d][l-d] if l>=d else 0))
    else:
        sum=0
        for i in range(l,r+1,d):
            sum+=a[i]
        print(sum)