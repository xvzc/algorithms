import requests

URL = 'https://www.acmicpc.net/submit/10944/29083282' 

response = requests.get(URL)
headers = {
            'Content-Type': 'application/x-www-form-urlencoded',
            'origin'      : 'https://www.acmicpc.net',
            'referer'     : 'https://www.acmicpc.net/'
          }
cookies = {
            '_jsuid'                  : 2304264133, 
            '_ga'                     : 'GA1.2.1548687845.1606315220', 
            '_gads'                   : 'ID=9c5ddaa267a66326-22db159522c500c1:T=1607534943:RT=1607534943:S=ALNI_MaqNXfEAPmR6_kMc13Lqp7b7nNNvg', 
            '_awl'                    : '2.1610434958.0.4-a3f58c0b-085b745b2e633431174d5a3dd8302559-6763652d617369612d6561737431-5ffd498e-0;',
            'OnlineJudge'             : 's5612904v598dufvnttafbfq1t', 
            '_fbp'                    : 'fb.1.1620359283572.993090303',
            '_gid'                    : 'GA1.2.44857384.1620359284',
            '_gat_gtag_UA_10874097_3' : '1'
          }

print(response.text)
