#2 zad
from random import randint
count = int(input("Enter count of number: "))
first_list = [randint(1, 20) for i in range(count)]
print(first_list)
'''for k in range(0, count+2,2):
    first_list.insert(k+1, first_list[k]+first_list[k+1])
print(first_list)'''
k=0
i=1
while True:
    if i>=count:
        break
    else:
        first_list.insert(k+1, first_list[k]+first_list[k+1])
        k=k+2
        i=i+1
print(first_list)
