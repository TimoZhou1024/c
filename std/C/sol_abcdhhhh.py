from collections import Counter

T = int(input())
for _ in range(T):
    s = input().split()
    flush = len({_[1] for _ in s})==1
    point = sorted(['0123456789TJQKA'.find(_[0]) for _ in s])
    straight = all([point[i+1]-point[i]==1 for i in range(4)])
    if point==[2,3,4,5,14]:
        straight = True
    stat = Counter(point)
    stat = sorted([stat[_] for _ in stat])
    if straight and flush:
        if point[0]==10:
            print('Royal flush')
        else:
            print('Straight flush')
    elif stat==[1,4]:
        print('Four of a kind')
    elif stat==[2,3]:
        print('Full house')
    elif straight:
        print('Straight')
    elif flush:
        print('Flush')
    elif stat==[1,1,3]:
        print('Three of a kind')
    elif stat==[1,2,2]:
        print('Two pairs')
    elif stat==[1,1,1,2]:
        print('Pair')
    else:
        print('Highcard')