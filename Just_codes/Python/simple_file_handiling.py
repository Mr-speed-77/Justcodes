f = open('new.txt','w')
f.write("Hello\n\n\n")
content='$ India\n$ Amercia\n$ london\n$ Japan'
f.writelines(content)
f.close
    

f=open("new.txt",'r+')
f.read()
f.close()