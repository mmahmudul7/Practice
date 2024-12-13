class Student:
    def __init__(self, name, cur_class, id):
        self.name = name
        self.cur_class = cur_class
        self.id = id

    def __repr__(self):
        return f'Student with name: {self.name}, class: {self.cur_class}, id: {self.id}'

class Teacher:
    def __init__(self, name, subject, id):
        self.name =  name
        self.subect = subject
        self.id = id

    def __repr__(self):
        return f'Teacher: {self.name}, subject: {self.subect}'

class School:
    def __init__(self, name):
        self.name = name
        self.teachers = []
        self.students = []

    def add_teacher(self, name, subject):
        id = len(self.teachers) + 101
        teacher = Teacher(name, subject, id)
        self.teachers.append(teacher)

    def enroll(self, name, fee):
        if fee < 6500:
            return 'not enough fee'
        else:
            id = len(self.students) + 1
            student = Student(name, 'C', id)
            self.students.append(student)
            return f'{name} is enrolled with id: {id}, extra money {fee - 6500}'
        
    def __repr__(self):
        print('\n\tWelcome to', self.name)
        print('\n-----------OUR Teachers-----------')
        for teacher in self.teachers:
            print(teacher)
        print('\n-----------OUR Students-----------')
        for student in self.students:
            print(student)
        return 'All Done for now.\n'


# mahmud = Student('Mahmudul Hasan', 9, 1)
# shamim = Teacher('Hasan Shamim', 'Algorithm', 101)
# print(mahmud)
# print(shamim)

phitron = School('Phitron')
phitron.enroll('mahmud', 5200)
phitron.enroll('hasan', 8000)
phitron.enroll('shamim', 7000)
phitron.enroll('khan', 90000)

phitron.add_teacher('Rahat', 'C and C++')
phitron.add_teacher('Khan', 'Data Strucure')
phitron.add_teacher('Pathan', 'Algorithm')
phitron.add_teacher('Kowshik', 'Data Base')
phitron.add_teacher('Chonkar', 'Python')

print(phitron)