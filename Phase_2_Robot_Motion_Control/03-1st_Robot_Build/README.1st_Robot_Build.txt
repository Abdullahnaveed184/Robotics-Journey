After becoming aware of the basic principle of robot motion, this was my first attempt to make a simple robot which posses' a simple motion:-
--Parts i used in this robot building are as follow:
.Arduino Uno R3
.Motor Driver
.2 DC motors
.A battery pack

--Connections made were as follow:
.For motors
    | Motor       | Driver Pins |
    | ----------- | ----------- |
    | Left Motor  | OUT1 & OUT2 |
    | Right Motor | OUT3 & OUT4 |
.For Motor driver with Arduino
    | Driver Pin | Arduino Pin |
    | ---------- | ----------- |
    | IN1        | 8           |
    | IN2        | 7           |
    | IN3        | 6           |
    | IN4        | 5           |
    | ENA        | 9 (PWM)     |
    | ENB        | 10 (PWM)    |
--Code i write in C++ for this is also given in the same folder.
--Above code shows that this Robot moves forward foe 3 sec and then stops for 2 sec, then moves backward for 3 sec and stops for 4 sec and loop goes on.
--My this very first attempt goes very well and a video with some photos are given in the folder.
