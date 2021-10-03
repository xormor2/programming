type = 0 if input("Kirje vai paketti? (k/p): ") == "k" else 1
prices = [[50, 4, 7], [200, 8, 14]]

weight = int(int(input("Paino: "))/100)
final_price = prices[type][0]
final_price += weight * prices[type][1] if 2 <= weight < 5 else weight * prices[type][2]

if not type and weight > 5: final_price += 2 if input("Postilaatikkoon? (k/e): ") == "e" else 0
print(str(int(final_price)/100) + "€")
