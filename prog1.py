# "#" is used to comment out lines

name = raw_input("What is your name: ");

#print("Hi" + name);

#print("hi"),;
#print(name);

#print("hi %s" % (name));

age = raw_input("how old are you?");
age = int (age);

#print(age);
#print(name + "is " + str(age) + " years old");

print("%s is %d years old" % (name, age));

if(age >= 18):
	print("Yes you can vote");
else:
	print("No you can't vote");
	print("but you can in " +str(18-age)+ " years");
	print("but you can in %d years" % (18-age));

#for k in range(5):
#for k in range(10,20):
for k i range(10,20, 3):
	print k,;
print

print("The End");
