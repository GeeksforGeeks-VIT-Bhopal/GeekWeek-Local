import pyttsx3
def speak(text):
    engine = pyttsx3.init()
    engine.say(text)
    engine.runAndWait()

speak("My name is bondakka")