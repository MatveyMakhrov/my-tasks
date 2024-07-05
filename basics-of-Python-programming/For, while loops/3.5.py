def binary_to_decimal(binary):
    decimal = 0
    power = 0
    for digit in reversed(binary):
        decimal += int(digit) * (2 ** power)
        power += 1
    return decimal

binary_number = input()

decimal_number = binary_to_decimal(binary_number)
print(decimal_number)
