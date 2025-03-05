
import os
from models.deadline import Deadline 
from models.research import Research
from models.course_project import Course_project
from models.student import Student
from models.professor import Professor
import pickle

FILE_NAME = r"C:\Users\user\Desktop\dasha\Учеба\PPOIS2\save.pkl"



class System:

    def __init__(self):
        isCycle = True
        age=0
        print("Enter info about student")
        while age ==0:
            try:
                age=int(input("enter age\n"))
            except ValueError:
                print("Enter age!Try one more time\n")  

        student=Student(input("enter name\n"),age,input("group number\n"),input("number in list of students(1-7)\n"))
        print("Enter info about course project(deadlines)")
        deadline_list=[]
        flag=True
        while(flag):
            print("Enter deadline, or press 0\n")
            deadline=input("enter a deadline\n")
            if deadline !="0":
                deadline_list.append(deadline)
            else:
                flag=False
        course_project=Course_project(deadline_list)
        professor=Professor("Mr.Smith")
        research=Research()
        while(isCycle):
            choice = int(input("Choose operation:\n1.Choose theme\n2.Create working plan\n3.Get and analyse info\n4. Write text\n5. Edit text and see result\n6.Consultation with professor\n7.Pass course project\n(1-7, or any other number to exit): "))
            
                
            if choice == 1:

                student.choose_theme(course_project)
                print("theme is", course_project.get_theme())

                continue
                
            elif choice == 2:
               
                student.edit_plan(course_project,input("enter an item\n"),input("text of this item\n"))
               
                continue
                
            elif choice == 3:
                try:
                    student.get_information()
                    student.analyse_information(course_project)
                    print("analysed info:\n", student._analysed_info_for_cp)
                except UnboundLocalError:
                    print("Befor this choose theme") 

                continue
                
            elif choice == 4:
                try:
                    student.write_text(course_project)
                    print("text:\n", course_project.get_text())
                except UnboundLocalError:
                    print("Befor this choose theme and analyse info") 

                
                continue
                
            elif choice == 5:
                try:
                    str_to_remove=input("enter a string to remove")
                    student.edit_text(course_project,str_to_remove)
                    print("text:\n", course_project.get_text())
                except BaseException:
                    print("Befor this choose theme,analyse info and write text") 
                
                continue
                
            elif choice == 6:
                student.consultation_with_professor(professor,research)
                print("Answers that were given")
                print(research._answers)
                continue
                
            elif choice == 7:
                if student.pass_corse_project(professor,course_project):
                    print("Pass")
                else:
                    print("Try one more time :((")
                continue
                
            else:
                isCycle = False
                print("Exiting program...")

def save(ui: System):
    with open(FILE_NAME, "wb") as file:
        pickle.dump(ui, file)

def load():
    try:
        with open(FILE_NAME, "rb") as file:
            return pickle.load(file)
    except FileNotFoundError:
        return System()



if __name__ == "__main__":
    menu = load()
    save(menu)   
