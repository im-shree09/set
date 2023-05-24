# http://10.10.16.15/submission
# //*[@id="TextBox1"]
# //*[@id="TextBox2"]
# //*[@id="Button1"]

from selenium import webdriver
from selenium.webdriver.common.by import By
import time
path= 'C:\webdriver\chromedriver.exe'
driver=webdriver.Chrome(executable_path= path)

# adsURL= "http://10.10.16.15/submission"
adsURL= "http://10.10.16.164/login/index.php"
name="2020BTECS00055"
pwd="Sicd@1234"
driver.get(adsURL)

time.sleep(3)


username= driver.find_element(By.XPATH, '//*[@id="username"]')
username.send_keys(name)

pswd= driver.find_element(By.XPATH, '//*[@id="password"]')
pswd.send_keys(pwd)

login= driver.find_element(By.XPATH, '//*[@id="loginbtn"]').click()
# continuebtn= driver.find_element(By.XPATH, '//*[@id="ContentPlaceHolder1_Button2"]').click()



time.sleep(3)

