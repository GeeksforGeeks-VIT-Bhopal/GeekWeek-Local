from bs4 import BeautifulSoup
import requests
print("this is with html tags :",title)

qwery=soup.find('h1')

print("this is without html tags:",qwery.text) 


links=soup.find('a')
print(links)

print(links['href']) 

print(links['class'])

many_link=soup.find_all('a') 
total_links=len(many_link) 
print("total links in my website :",total_links)
print()
for i in many_link[:6]: 
    print(i)

second_link=many_link[1]
print(second_link)
print()
print("href is :",second_link['href'])

nested_div=second_link.find('div')
print(nested_div)
print()
z=(nested_div['class'])
print(z)
print(type(z))
print()
print("class name of div is :"," ".join(nested_div['class'])) 


wiki=requests.get("https://en.wikipedia.org/wiki/World_War_II")
soup=BeautifulSoup(wiki.text,'html.parser')
print(soup.find('title'))


ww2_contents=soup.find_all("div",class_='toc')
for i in ww2_contents:
    print(i.text)


overview=soup.find_all('table',class_='infobox vevent')
for z in overview:
    print(z.text)
