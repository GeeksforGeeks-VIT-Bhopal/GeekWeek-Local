import requests
api_adress = 'http://api.openweathermap.org/data/2.5/weather?appid=1ff6c206dc85dfaa9483c118a661d090&q='
city=input("City Name : " )

url= api_adress + city

json_data = requests.get(url)
print(json_data)
