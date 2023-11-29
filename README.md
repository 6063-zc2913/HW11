# HW11
 
I want there are two lights. When the password is successful, the blue light will light up. When the password is incorrect, the yellow light will light up. 
My password steps are: press button1 for the first time, button2 for the second time, 
rotate the potentiometer to the maximum value for the third time, and press button1 for the fourth time. 
If this sequence is correct, the password is successful, so I used the if else function to check whether the button is pressed correctly. 
If correct is false, turn on pin 3 (yellow light) for 2 seconds, indicating failure. 
Afterwards, reset currentStep to 0 and correct to true to prepare for the next try. 
But I found that the button was a little too sensitive. So I set delay(500) to slow down the execution speed.