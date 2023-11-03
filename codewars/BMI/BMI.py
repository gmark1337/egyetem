def bmi(weight, height):
    calc = weight / (height * height)
    if calc <= 18.5:
        return "Underweight"
    elif calc <= 25:
        return "Normal"
    elif calc <= 30:
        return "Overweight"
    elif calc > 30:
        return "Obese"


print(bmi(80, 1.80))
