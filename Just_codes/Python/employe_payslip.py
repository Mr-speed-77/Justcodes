class Employee:
    
    def __init__(self, emp_Id, emp_name, basic_salary, allowance):
        
        self.emp_Id = emp_Id
        self.emp_name = emp_name
        self.basic_salary = basic_salary
        self.allowance = allowance

    # Find net salary 

    def Calculate_net_salary(self):
        
        tax_percentage = 0.2
        tax_amount = self.basic_salary * tax_percentage
        net_salary = self.basic_salary + self.allowance - tax_amount
        return net_salary

    # Display employee pay slip 
  
    def emp_pay_slip(self):
        
        print(f"Employe Id: {self.emp_Id}")
        print(f'Employe Name: {self.emp_name}')
        print(f'Employe Basic_salary: {self.basic_salary}')
        print(f'Employe Allowance: {self.allowance}')
        print(f'Employe Net_salary: {self.Calculate_net_salary()}')

employe = Employee(emp_Id = 104, emp_name = 'speed', basic_salary = 50000, allowance = 10000)
employe.emp_pay_slip()
