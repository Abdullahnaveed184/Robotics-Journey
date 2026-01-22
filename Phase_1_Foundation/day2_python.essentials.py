# Robot variables
speed = 5          # motor speed
distance = 12      # sensor distance in cm

print("Speed:", speed)
print("Distance:", distance)

# Robot decision making
if distance < 10:
    print("STOP robot")
else:
    print("MOVE forward")

# Robot repetition (loop)
for i in range(3):
    print("Robot moving...")

# Robot actions using functions
def move_forward():
    print("Moving forward")

def stop():
    print("Stopping robot")

if distance < 10:
    stop()
else:
    move_forward()
