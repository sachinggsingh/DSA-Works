rint("Welcome to BMI Calculator")
weight = float(input("Enter your weight in kg: "))
height = float(input("Enter your height in m: "))
bmi = weight / (height * height)
print("Your BMI is", round(bmi, 3))
if(bmi<18.5):
    print("You are underweight need to increase weight")
elif(bmi>=18.5 and bmi<=24.9):
    print("Your BMI is normal you are fit")
elif(bmi>=25 and bmi<=29.9):
    print("You are overweight need to loose weight")
elif(bmi>=30):
    print("You are very fat need to burn weight")