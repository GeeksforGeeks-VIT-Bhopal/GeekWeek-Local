from src.midiutil import MIDIFile

MyMIDI = MIDIFile(1)

track = 0
time = 0
MyMIDI.addTrackName(track, time, "Sample Track")
MyMIDI.addTempo(track, time, 120)

channel = 0
duration = 1
volume = 100

MyMIDI.addNote(track, channel, 60, 1, duration, volume)
MyMIDI.addNote(track, channel, 64, 2, duration, volume)
MyMIDI.addNote(track, channel, 67, 3, duration, volume)

binfile = open("output.mid","wb")
MyMIDI.writeFile(binfile)
binfile.close()
