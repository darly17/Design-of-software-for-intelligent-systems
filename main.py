
import os
from models.deadline import Deadline 
from models.research import Research
from models.course_project import *
from models.student import Student
from models.professor import Professor
import pickle

FILE_NAME = r"C:\Users\user\Desktop\dasha\Учеба\PPOIS2\save.pkl"



class System:
    

    def __init__(self):
        self._student=Student("Alice",19,"321856","2")
        self._course_project=Course_project(["12.02","13.03","14.04"])
        self._professor=Professor("Mr.Smith")
        self._research=Research()
        isCycle = True
        while(isCycle):
            choice = int(input("Choose operation:\n1.Choose theme\n2.Create working plan\n3.Get and analyse info\n4. Write text\n5. Edit text and see result\n6.Consultation with professor\n7.Pass course project\n8.Save state\n(1-8, or any other number to exit): "))
            
                
            if choice == 1:

                self._student.choose_theme(self._course_project)
                print("theme is", self._course_project.get_theme())

                continue
                
            elif choice == 2:
               
                self._student.edit_plan(self._course_project,input("enter an item\n"),input("text of this item\n"))
               
                continue
                
            elif choice == 3:
                try:
                    self._student.get_information()
                    self._student.analyse_information(self._course_project)
                    print("analysed info:\n", self._student._analysed_info_for_cp)
                except UnboundLocalError:
                    print("Befor this choose theme") 

                continue
                
            elif choice == 4:
                try:
                    self._student.write_text(self._course_project)
                    print("text:\n", self._course_project.get_text())
                except UnboundLocalError:
                    print("Befor this choose theme and analyse info") 

                
                continue
                
            elif choice == 5:
                try:
                    str_to_remove=input("enter a string to remove")
                    self._student.edit_text(self._course_project,str_to_remove)
                    print("text:\n", self._course_project.get_text())
                except BaseException:
                    print("Befor this choose theme,analyse info and write text") 
                
                continue
                
            elif choice == 6:
                self._student.consultation_with_professor(self._professor,self._research)
                print("Answers that were given")
                print(research._answers)
                continue
                
            elif choice == 7:
                if self._student.pass_corse_project(self._professor,self._course_project):
                    print("Pass")
                else:
                    print("Try one more time :((")
                continue
            
            elif choice == 8:
               save(self)
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