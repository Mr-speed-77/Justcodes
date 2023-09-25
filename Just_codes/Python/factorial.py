  # Factorial of given Number
  
num = int(input("Enter a num: "))
fact = 1

if num<0:
    print("Only positive numbers are allowed ! ")
elif num == 0:
    print(f'factorial of {num} is 1')
else:
    for i in range(1,num+1):
        fact *= i
    print(f'factorial of {num} is {fact}')