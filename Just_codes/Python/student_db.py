my_dict = dict()

#update Student Details
def update_details():
    while(True):
        choice = input("Do you give your detail [y/n]: ")
        if choice == 'y':
            Id = input('Enter an ID: ')
            name = input('Enter a name: ')
            age = int(input('Enter an age: '))

            my_dict[Id] = {}
            my_dict[Id]['name'] = name
            my_dict[Id]['age'] = age
        else:
            print('Thanks for coming !')
            break;

# show Our details
def show_details():
    Id = input("Enter your id: ")
    if Id in my_dict:
        print(f'\n{my_dict[Id]}\n')
    else:
        print('Invalid Id')

# choose that options
def choose():
    choice = input('1. update your details [1]\n2. see your detail [2]\n3. Exit [3]\nEnter Choice: ')
    if choice == '1':
        update_details()
        choose()
    elif choice == '2':
        show_details()
        choose()
    elif choice == '3':
        exit(0)
    else:
        print('Invalid input !')

# Call the fuction
choose()
