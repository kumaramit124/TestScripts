evens =  [2,34,6,8,10]
print len(evens)

city = "Bangalore"
print len(city), "\n"

# list() :  To create list
details = {"name":"Amit Kumar", "age":39, "city": "Bangalore"}
keys = list(details)
print keys, "\n"

#append() : Appending item to list
print evens
evens.append(98)
evens.append(64)
print evens, "\n"

thislist = ["apple","banana","orange"]
tropical = ["mango","kiwi"]
thislist.extend(tropical)
print(thislist)

for x in thislist:
    print(x)

print "\n"

for i in range(len(thislist)):
    print(thislist[i])
print "\n"

thislist.sort()
print(thislist)

print "\n"
thislist.reverse()
print(thislist)

fruits = ["apple","mango","banana","kiwi"]
newlist = []

for x in fruits:
    if "a" in x:
        newlist.append(x)

print(newlist)    
print "\n"
thisdict = {
  "brand": "Ford",
  "model": "Mustang",
  "year": 1964
}
print(thisdict["brand"])
