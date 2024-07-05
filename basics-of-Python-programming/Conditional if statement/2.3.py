X, Y, K, N = map(
    int,
    input().split(',')
)

if X * 7 * Y <= K * N:
    print('enough')
else:
    print('not enough')
