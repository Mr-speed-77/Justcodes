
def max(num1,num2,num3):
    if(num1>num2) and (num1>num3):
        large = num1
    elif(num2>num1) and (num2>num3):
        large = num2
    else:
        large = num3
    print('The largest of three number is ',large)
    
def min(num1,num2,num3):
    if(num1<num2) and (num1<num3):
        small = num1
    elif(num2<num1) and (num2<num3):
        small = num2
    else:
        small = num3
    print('The largest of three number is ',small)

n1=int(input('Enter a first number: '))
n2=int(input('Enter a second number: '))
n3=int(input('Enter a third number: '))

max(n1,n2,n3)
min(n1,n2,n3)
