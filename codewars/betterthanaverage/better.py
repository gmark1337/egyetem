
def better_than_average(class_points, your_points):
    avg = 0
    for i in class_points:
        avg += i
    new = avg / len(class_points)
    if your_points >= new:
        return True
    else:
        return False



print(better_than_average([100, 40, 34, 57, 29, 72, 57, 88], 75))
