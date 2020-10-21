kms = input("How many kilometers did you run today? >> ")

miles = round(float(kms) / 1.609344, 2)

print(f"Your {kms} km run was {miles} mi today.")
print("Your " + kms + " km run was " + str(miles) + " mi today.")