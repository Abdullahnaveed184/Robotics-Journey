This is the Phase 2 of my portfolio in which i will try to convey how i learnt
and solve my problems by my own.
.Use of motor drivers:-
    I experienced why motors can't be powered directly, while i was building a car module.
--Motors can't be directly connected to Arduino.
--Reason is this, Motors need high power to work.
--Think Arduino as power pipe but with narrow opening.
--Motors need large current that Arduino can't provide but motor drivers can.
--Motor drivers provide sufficient current to motors.
--Moreover there is also a reason to not connect motors directly with the Arduino.
--Motor and logic circuits is powered separately to prevent electrical noise interference.
--These electric noise interference can disturb Arduino working.
--Motor's RPM IS controlled using PWM duty cycle modulation.
--There is the most interesting thing that i came to know while building module that changed
the way i see motors work.
--While working motors behave as a generator and send back voltage.
--This can damage Arduino pins permanently but there is a way to stop this.
--Driver circuitry provided back-EMF protection from inductive motor loads.
--In this way our motor driver act as a shield from the negative effects coming from Arduino.

