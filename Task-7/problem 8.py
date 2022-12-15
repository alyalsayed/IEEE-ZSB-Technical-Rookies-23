s=input()
new=""
lis=["--","-.","."]
for i in lis:
    if(i=="--"):
        new=s.replace(i,"2")
    elif(i=="-.") :
        new=s.replace(i,"1")
    elif(i==".") :
        new=s.replace(".","0")
    s=new
print(new)

