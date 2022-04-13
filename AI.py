import pyttsx3
import datetime
import speech_recognition as sr
import wikipedia
import webbrowser
import os


engine = pyttsx3.init('sapi5')
voices = engine.getProperty('voices')
engine.setProperty('voice', voices[1].id)

#enabling the computer to speak
def speak(audio):
    engine.say(audio)
    engine.runAndWait()
    
#wishme function wishes the user with current time   
def wishme():
    hour = int(datetime.datetime.now().hour)
    if hour>=0 and hour<12:
        speak("good morning")
    elif hour>=12 and hour<18:
        speak("good afternoon")
    else:
        speak('good evening')
    speak('hello, i am doremi, how may i help you.')
    
#it takes microphone input from the user and give string output 
def takeCommand():
    r = sr.Recognizer()
    with sr.Microphone() as source:
        print("listenning...")
        r.pause_threshold = 1
        audio = r.listen(source)
        
    try:
        print('recognizing...')
        query = r.recognize_google(audio, language="en-in")
        print(f"user said: {query}\n")
    except Exception:
        print("say it again")
        speak('say it again')
        return "none"
    return query
       

if __name__ == '__main__':
    wishme()
    while True:
        query= takeCommand().lower()
        
        if "wikipedia" in query:
            speak("searching wikipedia....")
            query = query.replace('wikipedia', '')
            results = wikipedia.summary(query, sentences=2)
            speak("according to wikipedia..")
            print(results)
            speak(results)
            
            
        elif "quit" in query:
            speak("good bye")
            break
            
        elif "open youtube" in query:
            webbrowser.open('youtube.com')
            speak("opening youtube")
            
        elif "open google" in query:
            webbrowser.open('google.com')
            speak("opening google")
            
        elif "the time" in query:
            strtime = datetime.datetime.now().strftime("%H:%M:%S")
            speak(f" the time is {strtime}")
