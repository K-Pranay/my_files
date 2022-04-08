import urllib.request, urllib.parse, urllib.error
from bs4 import BeautifulSoup
import ssl

# Ignore SSL certificate errors
ctx = ssl.create_default_context()
ctx.check_hostname = False
ctx.verify_mode = ssl.CERT_NONE

url = input('Enter - ')
html = urllib.request.urlopen(url, context=ctx).read()
soup = BeautifulSoup(html, 'html.parser')

# Retrieve all of the anchor tags
tags = soup('a')
strs=url.split('_')
strs1=strs[2].split('.')
#print(strs1[0])
strmain=strs1[0]

lastname=' '
x=7                       #edit x
def func(url,x,strmain,lastname):
    if x==0:
        print('Sequence of names:',strmain)
        print('Last name in sequence:',lastname)
        return
    else:
        html = urllib.request.urlopen(url, context=ctx).read()
        soup = BeautifulSoup(html, 'html.parser')

        tags = soup('a')

        count=1
        for tag in tags:
            if count==18:              #edit count
                strmain=strmain+' '+tag.contents[0]
                lastname=tag.contents[0]
                return func(tag.get('href', None),x-1,strmain,lastname)
            count=count+1
func(url,x,strmain,lastname)
