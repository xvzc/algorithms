import requests
from bs4 import BeautifulSoup
import os
import sys
import ntpath


class Problem:
    id = 1000
    language = ''

    def __init__(self, id, language):
        self.id = id
        self.language = language

    def __repr__(self):
        return 'Problem {' + self.id + ', ' + self.language + '}'


    def of(full_path):
        tokens = ntpath.basename(full_path).split('.')
        id = tokens[0]
        language = tokens[1]
        return Problem(id, language)


languages = {
    'cpp': 84,
    'py': 28,
    'c': 75,
    'txt': 58,
    'java': 93,
    'kts': 69
}

args = sys.argv
file_path = args[1]
problem = Problem.of(file_path)

token_path = ntpath.dirname(args[0])

bojautologin = ''
with open(token_path + '/boj-token', 'r') as file:
    bojautologin = file.read().strip()

with open(file_path, 'r') as file:
    code = file.read()

    url = 'https://www.acmicpc.net/submit/' + problem.id

    response = requests.get('https://www.acmicpc.net')

    cookies_dict = {
        'bojautologin': bojautologin,
        'OnlineJudge': response.cookies.get_dict()['OnlineJudge']
    }

    response = requests.get(url, cookies=cookies_dict)

    html = response.text
    soup = BeautifulSoup(html, 'html.parser')
    input_tags = soup.select('input')

    if input_tags[1]['name'] == 'login_user_id':
        print('Login required')
        exit(0)

    csrf_key = ""
    for i in input_tags:
        if i['name'] == 'csrf_key':
            csrf_key = i['value']

    payload = {
        'problem_id': problem.id,
        'language': languages[problem.language],
        'code_open': 'open',
        'source': code,
        'csrf_key': csrf_key
    }

    response = requests.post(url, data=payload, cookies=cookies_dict)

    os.system('open -a Firefox "https://www.acmicpc.net/status?user_id=jry9913"')
