from bs4 import BeautifulSoup

# 打开你的HTML文件
with open('1.html', 'r') as f:
    contents = f.read()

soup = BeautifulSoup(contents, 'lxml')

# 找到所有的<img>标签
img_tags = soup.find_all('img')

urls = [img['src'] for img in img_tags]

for url in urls:
    print(url)