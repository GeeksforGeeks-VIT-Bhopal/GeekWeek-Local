import requests
import tkinter as tk


height = 630
width = 800

def get_weather(city):
	try:
		api_address='http://api.openweathermap.org/data/2.5/weather?appid=0c42f7f6b53b244c78a418f4f181282a&q='
		url = api_address+city
		weather_data = requests.get(url).json()
		name = weather_data['name']
		description = weather_data['weather'][0]['description']
		temp = weather_data['main']['temp'] #returns temperature in kelvin
		wind_speed = weather_data['wind']['speed'] #returns the speed of the winds

		output_label['text'] = "Name: "+name+"\n"+"Condition: "+description+"\n"+"Temp[in kelvin]: "+str(temp)+"\n"+"Wind-speed[in m/s]: "+str(wind_speed)
	except:
		output_label['text'] = "'"+city+"'"+"\n"+"Wrong input"

win = tk.Tk()

canvas = tk.Canvas(win,height=height,width=width)
canvas.pack()

input_frame = tk.Frame(win,bg="#234873",bd=5)
input_frame.place(relx=0.5,rely=0.1,relwidth=0.75,relheight=0.1,anchor='n')

entry = tk.Entry(input_frame,font=20)
entry.place(relwidth=0.73,relheight=1)

button = tk.Button(input_frame, text="Get Weather",font=20,command=lambda: get_weather(entry.get()))
button.place(relx=0.7, relheight=1, relwidth=0.3)

output_frame = tk.Frame(win, bg='#80c1ff', bd=10)
output_frame.place(relx=0.5, rely=0.25, relwidth=0.75, relheight=0.7, anchor='n')

output_label = tk.Label(output_frame,font=('Rubik',35))
output_label.place(relwidth=1,relheight=1)

win.mainloop()