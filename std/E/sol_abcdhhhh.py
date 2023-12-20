import sys
from math import pi, sin, cos

T = int(input())

for _ in range(T):
    n = int(input())
    x0, y0 = [int(_) for _ in input().split()]
    if n <= 13:
        print('! impossible')
        sys.stdout.flush()
        continue
    print('?', x0, y0)
    theta0 = float(input())
    if abs(theta0) > pi * 2:
        print('!', x0, y0)
        sys.stdout.flush()
        continue
    if abs(abs(theta0) - pi / 2) < pi / 4:
        print('?', x0 + 1, y0)
        sys.stdout.flush()
        theta1 = float(input())
        if abs(theta1) > pi * 2:
            print('!', x0 + 1, y0)
            sys.stdout.flush()
            continue
        r = sin(theta1) / sin(theta1 - theta0)
    else:
        print('?', x0, y0 + 1)
        sys.stdout.flush()
        theta1 = float(input())
        if abs(theta1) > pi * 2:
            print('!', x0, y0 + 1)
            sys.stdout.flush()
            continue
        r = cos(theta1) / sin(theta0 - theta1)
    print('!', x0 + round(r * cos(theta0)), y0 + round(r * sin(theta0)))
    sys.stdout.flush()