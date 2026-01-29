
speed = 5
distance = 12     

print("Speed:", speed)
print("Distance:", distance)


if distance < 10:
    print("STOP robot")
else:
    print("MOVE forward")


for i in range(3):
    print("Robot moving...")


def move_forward():
    print("Moving forward")

def stop():
    print("Stopping robot")

if distance < 10:
    stop()
else:
    move_forward()

