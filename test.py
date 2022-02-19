from selenium import webdriver

driver = webdriver.Chrome(executable_path='./chromedriver')

url = driver.command_executor._url
session_id = driver.session_id

driver = webdriver.Remote(command_executor=url, desired_capabilities={})
driver.session_id = session_id

driver.get("http://www.mrsmart.in")


print(url)
print(session_id)
