X, Y, Z = map(
    int,
    input().split(' ')
)

if X + Y > Z and X + Z > Y and Y + Z > X:
    if (X * X + Y * Y == Z * Z or
        X * X + Z * Z == Y * Y or
        Z * Z + Y * Y == X * X):
        print('yes-yes')
    else:
        print('yes-no')
else:
    print('no')
