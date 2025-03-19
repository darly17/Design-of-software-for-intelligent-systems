import unittest
import sys
import os
sys.path.append(os.path.abspath(os.path.join(os.path.dirname(__file__), '..')))

from models.professor import *

class TestProfessor(unittest.TestCase):
    def test_answer_question(self):
        
        professor=Professor("Mr Smith")
        self.assertEqual(professor.answer_question("How to do this"),"ask later")

    def test_accept_course_project(self):
        professor=Professor("Mr Smith")
        deadline_list=["12.02","12.03","12.04"]
        course_project=Course_project(deadline_list)
        self.assertEqual(professor.accept_course_project(course_project),True)

    

if __name__ == '__main__':
        unittest.main()