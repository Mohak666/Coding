# Given a list of numbers and a number k, return whether any two numbers from the list add up to k.
# For example, given [10, 15, 3, 7] and k of 17, return true since 10 + 7 is 17.
# Bonus: Can you do this in one pass?

numbers = [10, 15, 3, 7]
numbersSet = set()
k = 17

for x in numbers:
    print(numbersSet)
    # print("pairing with:",x)
    if k-x in numbersSet:
        print('Pair found : ',k-x,' - ',x)
    else:
        numbersSet.add(x)
