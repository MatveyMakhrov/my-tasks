import math

M, A, H, R = map(
    float,
    input().split(' ')
)

volume_cube = float(A * A * A)
volume_cylinder = float(math.pi * R * R * H)
volume_liquid = M / 1000

if volume_cube >= volume_liquid and volume_cylinder < volume_liquid:
    print('cube')
elif volume_cube < volume_liquid and volume_cylinder >= volume_liquid:
    print('cylinder')
elif volume_cube >= volume_liquid and volume_cylinder >= volume_liquid:
    print('cube-or-cylinder')
elif volume_cube < volume_liquid and volume_cylinder < volume_liquid and volume_cube + volume_cylinder >= volume_liquid:
    print('cube-and-cylinder')
else:
    print('fail')
