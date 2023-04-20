# print(f'{"Player Name":16}{"Goals":8}')
# print('-' * 24)
# print(f'{"Sadio Mane":16}{"22":8}')
# print(f'{"Gabriel Jesus":16}{"7":8}')
print("1234567890"*8)
#print(f'{"column1":10}{"column2":10}{"column3":25}--')
names = ['Sadio Mane', 'Gabriel Jesus']
goals = [22, 7]
print(f'{"Player Name":<16}{"Goals":<8}')
for i in range(2):
    print(f'{names[i]:<16}{goals[i]:^8}')