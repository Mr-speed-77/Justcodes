
my_list =[]
i = 0
while(1):
    element = input("Enter a element: ")
    if element == "":
        break
    else:
        my_list.append(element)
    i=i+1
    
    
print(f'Before remove duplicates:\n{my_list}')

def remove_duplicate(org_list):
    
    unique_list = list(set(org_list))
    unique_list.sort()
    return unique_list
    
    
print(f'\nAfter remove duplicates:\n{remove_duplicate(my_list)}')
