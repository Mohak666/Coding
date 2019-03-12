# This problem was asked by Uber.
# Given an array of integers, return a new array such that each element at index i of the new array is the product of all the numbers in the original array except the one at i.
# For example, if our input was [1, 2, 3, 4, 5], the expected output would be [120, 60, 40, 30, 24]. If our input was [3, 2, 1], the expected output would be [2, 3, 6].
# Follow-up: what if you can't use division?


# using division
numbers = [1, 2, 3, 4, 5]
n = len(numbers)
product = 1
for x in numbers:
    product*= x
newNumbers = []
for x in numbers:
    newNumbers.append(int(product/x))
print(newNumbers)


#without division
left = [x for x in numbers] #to store consecutive products of all elements towards left of ith element
right = [x for x in numbers] #to store consecutive products of all elements towards right of ith element
for i in range(n):
    if i!=0:
        left[i] = left[i-1]*left[i]
        right[n-i-1] = right[n-i]*right[n-i-1]
# print(left)
# print(right)
answer = []
for  i in range(n):
    if i == 0:
        answer.append(right[1])
    elif i == n-1:
        answer.append(left[n-2])
    else:
        answer.append(left[i-1]*right[i+1])
print(answer)
