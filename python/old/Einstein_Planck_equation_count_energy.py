#!/usr/bin/python3

print("This program is copyleft 2021 L.K.F.")
print("This program was made by Lauri K. Friberg in 2021.")
print("")
print("The program calculates the amount of energy given by one single")
print("photon when it oscillates at a certain frequency in Hertz.")
h=float(6.62607015*10**(-34))
f=float(input("Enter the frequency \"f\" of the oscillating photon in Hertz: f = "))
E=float(h*f)
print(f"Energy in Joules: E = {E} J")
