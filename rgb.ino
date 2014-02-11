int redPin = 9;
int greenPin = 10;
int bluePin = 11;

int redBrightness = 0;
int greenBrightness = 0;
int blueBrightness = 0;

int redFadeAmount = 1;
int greenFadeAmount = 2;
int blueFadeAmount = 3;

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop()  { 
  // set the brightness of pin 9:
  analogWrite(redPin, redBrightness);    
  analogWrite(greenPin, greenBrightness);    
  analogWrite(bluePin, blueBrightness);    

  // change the brightness for next time through the loop:
  redBrightness = redBrightness + redFadeAmount;
  greenBrightness = greenBrightness + greenFadeAmount;
  blueBrightness = blueBrightness + blueFadeAmount;

  // reverse the direction of the fading at the ends of the fade: 
  if (redBrightness <= 0 || redBrightness >= 255) {
    redFadeAmount = -redFadeAmount; 
  }   

  if (greenBrightness <= 0 || greenBrightness >= 255) {
    greenFadeAmount = -greenFadeAmount; 
  }  

  if (blueBrightness <= 0 || blueBrightness >= 255) {
    blueFadeAmount = -blueFadeAmount; 
  }    
  // wait for 30 milliseconds to see the dimming effect    
  delay(5);                            
}
