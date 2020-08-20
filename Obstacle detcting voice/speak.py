from gtts import gTTS
import os
tts = gTTS(text='WE have Detected an Obstacle. Obstacle Detected!', lang='en')
tts.save("Speak.mp3")
os.system("Speak.mp3")
