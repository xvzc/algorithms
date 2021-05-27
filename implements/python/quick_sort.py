def quick_sorted(arr):
    if len(arr) > 1:
        pivot = arr[len(arr)-1]
        left, mid, right = [], [], []
        for i in range(len(arr)-1):
            if arr[i] < pivot:
                left.append(arr[i])
            elif arr[i] > pivot:
                right.append(arr[i])
            else:
                mid.append(arr[i])
            print(left, mid, right)

        mid.append(pivot)

        return quick_sorted(left) + mid + quick_sorted(right)
    else:
        return arr
        
arr = [3, 17, 6, 5, 10, 9, 8, 4, 2, 14, 12]
print(quick_sorted(arr))