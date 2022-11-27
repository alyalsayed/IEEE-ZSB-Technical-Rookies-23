import random 
target = random.randint(100,1000)# get random number 
print(target)
print('Enter a 3-digit number')
hit=0; miss=0;attempts=1;
while True:
    hit,miss=0,0
    guessed = int(input())
    if(guessed==target):
        print('Right Guess after ',attempts,' attempts')
        break
    for i in range(3):
        if(str(guessed)[i]==str(target)[i]):
            hit+=1
    for i in range(3):
        if (str.__contains__(str(guessed),str(target)[i]) and str(guessed)[i]!=str(target)[i]):
            miss+=1
    attempts+=1
    print(hit," hit ",miss," miss")
    
 
