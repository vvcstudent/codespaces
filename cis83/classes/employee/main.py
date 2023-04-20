
class Employee:

    def __init__(self,id_number,lastname,firstname,birthdate):
        self.id_number = id_number
        self.lastname = lastname
        self.firstname = firstname
        self.birthdate = birthdate

    def __str__(self):
        return f'Employee: #{self.id_number} {self.firstname} {self.lastname} {self.birthdate}'

employee1 = Employee(10,'John','Doe','01/01/70')

print(employee1)