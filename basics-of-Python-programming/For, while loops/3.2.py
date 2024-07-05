N = input().split(' ')
num_visitors = int(N[0])

if num_visitors == 0:
    print("0 0")
else:
    min_age = int(N[1])
    max_age = int(N[1])

    for n in N[1:]:
        age = int(n)
        if age > max_age:
            max_age = age
        if age < min_age:
            min_age = age

    print(min_age, max_age)
