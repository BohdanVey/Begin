import datetime
now = datetime.datetime.now()
hours=int(input("Годин:"))
hours=hours+now.hour
minutess=int(input("Хвилин:"))
minutess=minutess+now.minute
hours=hours+int(minutess / 60)
minutess=minutess % 60
hours=hours % 24
print(str(hours) + " : " + str(minutess))
while True:
	now = datetime.datetime.now()
	if hours==now.hour and minutess==now.minute:
		print(str(hours) + " : " + str(minutess))