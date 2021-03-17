import requests
from pprint import pprint

city = input("Enter user city= ")

url = 'http://api.openweathermap.org/data/2.5/weather?q={}&appid=c81790462922cb1d99afd478135d8753&units=metric'.format(city)

res = requests.get(url)

data = res.json()

temp = data['main']['temp']

print(res)

print("The current temperature of {}= ".format(city),end='')
pprint(temp)