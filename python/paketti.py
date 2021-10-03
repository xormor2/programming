t='p' in input("Kirje vai paketti? (k/p): ")
w=int(input("Anna paino grammoissa: "))//100
p=t+(1+2*t)*(0.50+(w>2)*w*0.04+(w>5)*w*0.03)
if t<(w>4): p+=2*(input("Mahtuuko kirje laatikkoon (k/e): ")=='e')
print("%0.2f€"%p)
