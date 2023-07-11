# main.py

from core.core import IProgramController
from programs.hello import HelloWorldProgram
from ui.ui import UI

# Создаем экземпляр контроллера программ
controller = IProgramController()

# Регистрируем программы в контроллере
controller.register_program(HelloWorldProgram("Приветствие", "Test", "Программа выводит приветствие"))

# Создаем экземпляр пользовательского интерфейса
ui = UI(controller)

# Запускаем пользовательский интерфейс
ui.run()

