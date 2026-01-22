def sense_distance():
    # Pretend sensor reading
    return 7

def decide(distance):
    if distance < 10:
        return "STOP"
    else:
        return "MOVE"

def act(decision):
    print("Robot action:", decision)

distance = sense_distance()
decision = decide(distance)
act(decision)
