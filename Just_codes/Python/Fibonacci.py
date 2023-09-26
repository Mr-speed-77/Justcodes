   # Finbonacci Sequence
   
nterms = int(input('How many terms: '))
n1,n2 = 0,1
count = 0

if nterms<0:
    print('Please enter positive numbers !')
elif nterms == 1:
    print(f'Finbonacci Sequence upto {nterms}')
else:
    
    while count<nterms:
        print(n1)
        n3=n2+n1
        n1=n2
        n2=n3
        count+=1