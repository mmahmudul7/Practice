# https://pyautogui.readthedocs.io/en/latest/
# https://pypi.org/project/PyAutoGUI/
'''
import pyautogui
from time import sleep

sleep(5)
for i in range(5):
    pyautogui.write('Sobay kemon achen? ai message ti generated by autoType.py file. So ai message er kono reply na dilew cholbe. It\'s just for fun', interval=0.25)
    pyautogui.press('enter')
'''

import pyautogui
from time import sleep

sleep(5)
pyautogui.write(
    "Sobai kemon acho? Ai message autoType.py file diye generate kora hoyeche! Eta sudhu moja korar jonno. Reply na dileo cholbe!",
    interval=0.25
)
pyautogui.press('enter')