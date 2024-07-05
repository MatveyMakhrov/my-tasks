n = int(input())
positive = 0
negative = 0

while n != 0:
    if n > 0:
        positive += n
    else:
        negative += n
    n = int(input())

print(positive, ',', negative, sep='')
