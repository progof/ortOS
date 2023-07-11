# programs/hello.py

from core.core import IProgram

class HelloWorldProgram(IProgram):
    def run(self):
        print("Hello, world!")

