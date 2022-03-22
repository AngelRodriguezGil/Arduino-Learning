from gpiozero import Servo, LED, Button
from gpiozero.pins.pigpio import PiGPIOFactory
from time import sleep
import signal

#
servo=Servo(17)
button=Button(27)
#
#led=LED(21)
#boton=Button()
# l_sleep=float(input(' --> Enter time sleep for LED: '))
pin_yellow=str(input(' --> Enter pin for Yellow led: '))
pin_red=str(input('--> Enter pin for Red led: '))
s_sleep=float(input(' --> Enter time sleep for Servo: '))
n_ciclos=int(input(' --> Enter num of cycles: '))
i=0
j=0
#
#
def arranca():
    print('********** HERE WE GO ')
def para():
    print('           JOB DONE*********** ')
    
led=LED(pin_yellow)
led.on()
sleep(1)
#
led=LED(pin_red)
led.blink()
print('********** HERE WE GO.....   ')
#
while i < (n_ciclos):
    servo.min()
    sleep(s_sleep)
    servo.mid()
    sleep(s_sleep)
    servo.max()
    sleep(s_sleep)
    print('....cycle', i, 'Completed!')
    i+=1
    #for j in(n_ciclos):
    #   print('....cycle', j, 'Completed!')
    #   j+=1
   

# put to cero 
servo.detach()
led.close()
#led.close(pin_yellow)

print('  JOB DONE :-) ************')