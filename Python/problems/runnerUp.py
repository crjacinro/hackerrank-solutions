def runnerUp(arr):
    currentMax = max(arr)
    while max(arr) == currentMax:
        arr.remove(max(arr))

    return max(arr)
