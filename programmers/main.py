import heapq

data = [1, 3, 2, 4, 5]
heapq.heapify(data)
heapq.heappush(data, 7)
heapq.heappush(data, 2)
heapq.heappush(data, 2)
heapq.heappush(data, 2)

while True:
    try:
        print(heapq.heappop(data),' ', end='')
        # 1  2  2  2  2  3  4  5  7
    except IndexError:
        break
