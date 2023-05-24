from selenium import webdriver
from selenium.webdriver.common.by import By

path= 'C:\webdriver\chromedriver.exe'
driver=webdriver.Chrome(executable_path= path)

youtubeURL= "https://www.youtube.com/@WorldAffairsUnacademy"

driver.get(youtubeURL)

subcnt= driver.find_element(By.ID, "subscriber-count")
print(subcnt.text)

driver.quit()
