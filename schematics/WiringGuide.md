**GENERAL NOTE FOR ALL WIRING GUIDES + SCHEMATICS: “P1” and “P2” ARE NOT SPECIFIC PINS, THEY’RE MEANT TO INDICATE THAT YOU CAN USE ANY PINS FOR THEM (EXCEPT FOR P1, WHICH HAS TO BE AN INTERRUPT PIN ON THE MICROCONTROLLER (USUALLY D2 AND D3 ON ARDUINOS)**. 
----------------------------------------------------
Wiring Guide (early testing):

USB cable → Microcontroller port 

Microcontroller VCC or Battery + → PIR Vcc

Microcontroller P1 → PIR Vo

Microcontroller P2 → Buzzer +

Then connect all the grounds (GND/-) together

----------------------------------------------------
Wiring Guide (testing):

Battery + → TP4057 IN+

Battery - → TP4057 IN-

TP4057 OUT+ → Microcontroller VCC

Microcontroller VCC or Battery + → PIR Vcc

Microcontroller P1 → PIR Vo

Microcontroller P2 → Buzzer +

Then connect all the grounds (GND/-) together except for the battery’s

----------------------------------------------------
Wiring Guide (optional):

Battery + → TP4057 IN+

Battery - → TP4057 IN-

TP4057 OUT+ → Buck/Boost IN+

TP4057 OUT- → Buck/Boost IN-

Buck/Boost OUT+ → Microcontroller VCC

Microcontroller VCC or Buck/Boost OUT+ → PIR Vcc

Microcontroller P1 → PIR Vo

Microcontroller P2 → Buzzer +


Then connect all the grounds (GND/-) between the Buck/Boost out, the microcontroller, the PIR, and the buzzer together
