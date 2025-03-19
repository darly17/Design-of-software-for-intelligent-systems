import json
from pathlib import Path
class Research:
    QUESTIONS_FILE= Path("data_bases/questions.json")
    def __init__(self)->None:
        self._questions: Dict [str, str]={}
        self._answers: Dict [str, str]={}
        try:
            with open(self. QUESTIONS_FILE, 'r', encoding='utf-8') as _file:
                self._questions= json.load(_file)
        except json.JSONDecodeError:
            print("Opening error")

    def set_answer(self,question: str,answer: str)->None:
        self._answers[question]=answer

    def get_answer(self, question: str)->str:
        if self._answers[question]:
            return self._answers[question]
        else: 
            return "Has no answers yet"
    

