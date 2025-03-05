import unittest
import sys
import os
sys.path.append(os.path.abspath(os.path.join(os.path.dirname(__file__), '..')))

from models.research import *

class TestResearch(unittest.TestCase):
    
    
    def test_answer(self):
        research=Research()
        research.set_answer("How can I do this?","Think better")
        self.assertEqual(research._answers["How can I do this?"],'Think better')

   
       

if __name__ == '__main__':
        unittest.main()