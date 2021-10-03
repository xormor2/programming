#!/usr/bin/python3
"""Count the energy in Joules with the frequency f Hertz (f per second)."""

print("This program is copyleft 2021 L.K.F.")
print("This program was made by Lauri K. Friberg in 2021.")
print("")

print("The program calculates the amount of energy given by one single")
print("photon when it oscillates at a certain frequency in Hertz.")

PLANCK_CONSTANT=6.62607015*10**(-34)

f=float(input("Enter the frequency \"f\" of the oscillating photon in Hertz: f = "))
E=PLANCK_CONSTANT*f

print(f"Energy in Joules: E = {E} J")
