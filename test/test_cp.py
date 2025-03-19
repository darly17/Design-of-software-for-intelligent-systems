import unittest
import sys
import os
sys.path.append(os.path.abspath(os.path.join(os.path.dirname(__file__), '..')))

from models.course_project import *

class TestCourseProject(unittest.TestCase):
    def test_set_theme(self):
        deadline_list=["12.02","12.03","12.04"]
        course_project=Course_project(deadline_list)
        course_project.set_theme("AI")
        self.assertEqual(course_project._theme,"AI")

    def test_set_text(self):
        deadline_list=["12.02","12.03","12.04"]
        course_project=Course_project(deadline_list)
        course_project.set_text("AI")
        self.assertEqual(course_project._text,["AI"])

    def test_edit_text(self):
        deadline_list=["12.02","12.03","12.04"]
        course_project=Course_project(deadline_list)
        course_project.set_text("AI")
        course_project.set_text("A9")
        course_project.edit_text("A9")
        self.assertEqual(course_project._text,["AI"])

    def test_set_work_plan(self):
        deadline_list=["12.02","12.03","12.04"]
        course_project=Course_project(deadline_list)
        course_project.set_work_plan("1","planing")
        self.assertEqual(course_project._work_plan,{"1":["planing"]})

    def test_get_deadlines(self):
        deadline_list=["12.02","12.03","12.04"]
        course_project=Course_project(deadline_list)
        self.assertEqual(course_project._deadlines[1].on_time(),True)

if __name__ == '__main__':
        unittest.main()