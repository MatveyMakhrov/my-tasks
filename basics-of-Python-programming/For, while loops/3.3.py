# Считываем количество пациентов
n = int(input())

# Инициализируем список для хранения порядковых номеров беременных женщин
pregnant_women = []

# Обрабатываем информацию о каждом пациенте
for _ in range(n):
    patient_info = input().split()
    patient_number = int(patient_info[0])
    gender = patient_info[1]
    pregnancy_status = int(patient_info[2])

    # Проверяем, является ли пациентка беременной женщиной (женщина и беременна)
    if gender == 'F' and pregnancy_status == 1:
        pregnant_women.append(patient_number)

# Выводим порядковые номера беременных женщин через запятую или 0, если беременных нет
if pregnant_women:
    print(','.join(map(str, pregnant_women)))
else:
    print(0)
