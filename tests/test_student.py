import unittest
import sys
import os
sys.path.append(os.path.abspath(os.path.join(os.path.dirname(__file__), '..')))

from models.student import *

class TestStudent(unittest.TestCase):
    
    
    def test_choose_theme(self):
        student=Student("Tom",19,"3217000","1")
        deadline_list=["12.02","12.03","12.04"]
        course_project=Course_project(deadline_list)
        student.choose_theme(course_project)
        self.assertEqual(course_project.get_theme(),'Artificial_Intelligence_in_Medicine')

    def test_edit_plan(self):
        student=Student("Tom",19,"3217000","1")
        deadline_list=["12.02","12.03","12.04"]
        course_project=Course_project(deadline_list)
        student.edit_plan(course_project,"1","planing")
        self.assertEqual(course_project.get_work_plan(),{"1":["planing"]})


    def test_analyse(self):
        student=Student("Tom",19,"3217000","1")
        deadline_list=["12.02","12.03","12.04"]
        course_project=Course_project(deadline_list)
        student.choose_theme(course_project)
        student.get_information()
        student.analyse_information(course_project)
        student.write_text(course_project)
        student.edit_text(course_project,"AI systems enhance treatment by personalizing therapy and optimizing processes in clinics, reducing patient wait times.")
        self.assertEqual(course_project.get_text(),["Artificial intelligence helps in disease diagnosis by analyzing medical images and patient data for accurate predictions."])
    
    def test_pass_corse_project(self):
        student=Student("Tom",19,"3217000","1")
        deadline_list=["12.02","12.03","12.04"]
        course_project=Course_project(deadline_list)
        professor=Professor("mr.Smith")
        self.assertEqual(student.pass_corse_project(professor,course_project),True)


       

if __name__ == '__main__':
        unittest.main()