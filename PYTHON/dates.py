import datetime

now = datetime.datetime.now()
print(now)  # Output: e.g., 2024-05-19 14:28:36.202089

today = datetime.date.today()
print(today)  # Output: e.g., 2024-05-19

specific_date = datetime.date(2023, 12, 31)
print(specific_date)  # Output: 2023-12-31

now = datetime.datetime.now()
formatted_date = now.strftime("%Y-%m-%d %H:%M:%S")
print(formatted_date)  # Output: e.g., 2024-05-19 14:28:36

now = datetime.datetime.now()
print(now.year)
print(now.month)
print(now.day)