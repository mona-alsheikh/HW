x =[1,3.5,"mona",7,"m",7,5,"e",1.5,"c"]
i = 0
y = 0
while i < len(x):
    if isinstance (x[i],int) or isinstance(x[i],float):
        y = y+x[i]
    else:
        print("this is not a number:",x[i])
    print("sum:",y)
    i = i+1