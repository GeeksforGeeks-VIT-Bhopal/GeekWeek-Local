import speech_recognition

jarvis=speech_recognition.Recognizer()

with speech_recognition.Microphone() as source:
    print("Listening...")
    audioCapture=jarvis.listen(source)

    recognizeText=jarvis.recognize_google(audioCapture)
    print(recognizeText)

