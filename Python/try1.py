class Staff:
    def __init__(self,name,salary):
        self.name = name
        self.salary = salary
    def display(self):
        print(f'Name:{self.name} And Salary:{self.salary}')
class Teaching(Staff):
    def __init__(self, name, salary, subject):
        super().__init__(name, salary)
        self.subject = subject
    def display(self):
        super().display()
        print(f"Subject:{self.subject}")
class NonTeaching(Staff):
    def __init__(self, name, salary, department):
        super().__init__(name, salary)
        self.department = department
    def display(self):
        super().display()
        print(f"Department:{self.department}")
a = Staff('Rajan',250000)
t = Teaching('Rajan Malaviya',300000,'Python')
nt = NonTeaching('Rjn',500000,'IT')
nt.display()
t.display()
a.display()