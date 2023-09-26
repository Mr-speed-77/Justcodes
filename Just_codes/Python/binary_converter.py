def binary(n):
    if n>1:
        binary(n//2)
    print(n%2,end='')
    
dec = int(input('Enter a decimal value: '))
print("Binary value is: ",end='')
binary(dec)
