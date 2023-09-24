
title="Welcome to  Flames Game ! \n\n"
disp=title.center(100)
print(disp)


name_1 = str(input("Enter your name: ")).replace(" ","")
name_2 = str(input("Enter your partner name: ")).replace(" ","")
a = list(name_1)
b = list(name_2)
a_copy=a[:]
b_copy=b[:]
total_matches = 0

for i in a[:]:  # Iterate over a copy of 'a' to avoid modifying the list during iteration
    if i in b:
        a.remove(i)
        b.remove(i)
        total_matches += 2

a_length=len(a_copy)
b_length=len(b_copy)
total_length=a_length+b_length
flames=total_length-total_matches


if (flames==3) or (flames==5) or (flames==14) or (flames==16) or (flames==18) or (flames==21) or (flames==23):
    print("Friends")
elif(flames==10):
    print("Lover")
elif(flames==8) or (flames==12) or (flames==13) or (flames==17) or (flames==19) or (flames==28) or (flames==30):
    print("Affection")
elif(flames==6) or (flames==11) or (flames==15) or (flames==26):
    print("Marriage")
elif(flames==2) or (flames==4) or (flames==7) or (flames==9) or(flames==20) or (flames==22) or (flames==24) or (flames==25):
    print("Enemy")
elif(flames==1)or(flames==27) or (flames==29):
    print("Sister")
else:
    print("Sorry!! Your are Not Eligible in this game :(")