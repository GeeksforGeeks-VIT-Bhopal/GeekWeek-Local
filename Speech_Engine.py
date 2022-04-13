import speech_recognition
import pyttsx3

def speak(text):
    engine = pyttsx3.init('sapi5')
    engine.say(text)
    engine.runAndWait()

jarvis=speech_recognition.Recognizer()

condition=True
while condition:
    with speech_recognition.Microphone() as source:
       print("Listening...")
       audioCapture=jarvis.listen(source)

       try:
           recognizeText=jarvis.recognize_google(audioCapture)

           if 'exit' in recognizeText:
               print(recognizeText)
               condition = False

           else:
               print(recognizeText)
               speak("Hello, How are you?")
           
       except:
           print("Please Repeat!")
