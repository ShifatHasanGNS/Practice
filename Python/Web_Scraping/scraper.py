import requests
from bs4 import BeautifulSoup

url = "https://codewithharry.com"

r = requests.get(url)
htmlContent = r.content
# print(htmlContent)
soup = BeautifulSoup(htmlContent, 'html.parser')
# print(soup.prettify)
title = soup.title
# print(type(soup))
# print(type(title))
# print(type(title.string))
paragraphs = soup.find_all('p')
# print(paragraphs)
anchors = soup.find_all('a')
# print(anchors)
# print(soup.find('p')['class'])
# print(soup.find_all('p', class_="lead"))
# print(soup.find('p').get_text())
# print(soup.get_text())

all_links = set()
for link in anchors:
    if link != '#': all_links.add(url+link.get('href'))
for link in all_links:
    print(link)

markup = "<p><!--# This is a comment #--></p>"
soup2 = BeautifulSoup(markup)

print(soup2.p.string)