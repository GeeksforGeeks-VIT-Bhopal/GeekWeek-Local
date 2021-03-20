# MY OWN PERSONAL ASSISTANT

# install: pip install SpeechRecognition
# install: pip install pyttsx3
import speech_recognition    #speech to text
import pyttsx3        #text to speech

def speak(text):
    engine = pyttsx3.init('sapi5')
    engine.say(text)
    engine.runAndWait()
jarvis = speech_recognition.Recognizer()
condition = True
while condition:
    with speech_recognition.Microphone() as source:
        print("Listening...\n")
        audioCapture = jarvis.listen(source)
        try:
            recognizeText = jarvis.recognize_google(audioCapture)
            if 'exit' in recognizeText:
                condition = False
            else:
                print(recognizeText)
                speak("Hello how are you")
        except:
            print("Please repeat")
            speak("Please repeat")
    


