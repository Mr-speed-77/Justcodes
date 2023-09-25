class check():
    
    def __init__(self):
        self.n=[]
        
    def add(self,a):
        self.n.append(a)

    def remove(self,b):
        self.n.remove(b)

    def dis(self):
        return self.n

obj=check()


while True:
    print("0. Exit")
    print("1. Add")
    print("2. Delete")
    print("3. Display")
    choice = int(input("Enter Your choice: "))
    if choice == 1:
        n=int(input("Enter a number to append: "))
        obj.add(n)
        print("List: ",obj.dis())
    
    elif choice == 2:
        n=int(input("Enter a number to delete: "))
        obj.remove(n)
        print("List: ",obj.dis())
    
    elif choice == 3:
        print("List: ",obj.dis())
    
    elif choice == 0:
        print("Exit ...")
        break;
    
    else:
        print("Invalid choice ...")
    
    
    
    
    
    
    
    
    