# pip install selenium
# pip install webdriver-manager

from selenium import webdriver
from webdriver_manager.chrome import ChromeDriverManager
import time
# from webdriver_manager import chrome
doraemon = webdriver.Chrome(ChromeDriverManager().install())

doraemon.get("https://youtube.com/")

searchBar = doraemon.find_element_by_xpath('/html/body/ytd-app/div/div/ytd-masthead/div[3]/div[2]/ytd-searchbox/form/div/div[1]/input')
searchBar.click()
searchBar.send_keys('bollywood remix')

searchButton = doraemon.find_element_by_xpath('/html/body/ytd-app/div/div/ytd-masthead/div[3]/div[2]/ytd-searchbox/form/button')
searchButton.click()
#second
time.sleep(4)

gfg = doraemon.find_element_by_xpath('/html/body/ytd-app/div/ytd-page-manager/ytd-search/div[1]/ytd-two-column-search-results-renderer/div/ytd-section-list-renderer/div[2]/ytd-item-section-renderer/div[3]/ytd-channel-renderer[1]/div')
gfg.click()

time.sleep(2)

vid = doraemon.find_element_by_xpath('/html/body/ytd-app/div/ytd-page-manager/ytd-browse[2]/ytd-two-column-browse-results-renderer/div[1]/ytd-section-list-renderer/div[2]/ytd-item-section-renderer/div[3]/ytd-shelf-renderer/div[1]/div[2]/ytd-expanded-shelf-contents-renderer/div/ytd-video-renderer/div[1]')
vid.click()
