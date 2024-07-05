l, w, h, t = map (
    float,
    input().split(' ')
)
r = int(41)

K = l * w * h * r / t
print(int(K + 1))
