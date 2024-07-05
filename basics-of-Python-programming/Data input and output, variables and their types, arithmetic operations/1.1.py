foot_size, year_b, year_n = map(
    int,
    input().split()
    )

age = (foot_size * 100 - year_b + year_n) % 100
print(age)
