// Color LED Lighting study

const int LED_RED = 5;
const int LED_GREEN = 9;
const int LED_BLUE = 6;

int red = 0;
int green = 0; 
int blue = 0; 
int i = 0;


void setup(){
  pinMode(LED_RED, OUTPUT);
  pinMode(LED_GREEN, OUTPUT);
  pinMode(LED_BLUE, OUTPUT);
}

void updateBrightness(){
  // Update output along with sin function
  // initial angle: red = 0, green = 2/3*PI, blue = 4/3*PI
  red = sin(2 * 3.14 / 256 * i) * 128 + 128; 
  green = sin(2 * 3.14 / 256 * (i + 85)) * 128 + 128; 
  blue = sin(2 * 3.14 / 256 * (i + 170)) * 128 + 128; 
}

void loop(){
  updateBrightness();
  i++;
  analogWrite(LED_RED, red);
  analogWrite(LED_GREEN, green);
  analogWrite(LED_BLUE, blue);
  delay(30);
}
