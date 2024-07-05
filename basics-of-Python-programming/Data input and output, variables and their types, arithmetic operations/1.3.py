A1, B1, C1 = map (
    int,
    input().split(":")
)

A2, B2, C2 = map (
    int,
    input().split(":")
)

first_time_in_seconds = A1 * 3600 + B1 * 60 + C1
second_time_in_seconds = A2 * 3600 + B2 * 60 + C2

time_difference = second_time_in_seconds - first_time_in_seconds
print(time_difference)
