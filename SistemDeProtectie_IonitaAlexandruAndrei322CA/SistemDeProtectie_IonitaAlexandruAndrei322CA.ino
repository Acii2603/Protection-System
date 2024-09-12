#include<Keypad.h> 
#include<Wire.h>
#include<LiquidCrystal_I2C.h>
 

LiquidCrystal_I2C lcd(0x27, 16, 2); 
 
const byte numRows= 4; 
const byte numCols= 4;
char password[5];
char match[5]="1111";
char off[5]="8888";
byte enter = 0;
int on=0;

int ledR = 11;
int ledG = 12;
int ledB = 13;
 
char keymap[numRows][numCols]=
{
{'1', '2', '3', 'A'},
{'4', '5', '6', 'B'},
{'7', '8', '9', 'C'},
{'*', '0', '#', 'D'}
};
 
byte rowPins[numRows] = {9,8,7,6};
byte colPins[numCols]= {5,4,3,2};
 
Keypad myKeypad= Keypad(makeKeymap(keymap), rowPins, colPins, numRows, numCols);
 
void setup()
{
  Serial.begin(9600);
  pinMode(ledR,OUTPUT);
  pinMode(ledG,OUTPUT);
  pinMode(ledB,OUTPUT);
  lcd.init(); 
  lcd.backlight();
  lcd.print("PassCode:");
  delay(200);
       
}
 
void loop()
{  
  char customKey = myKeypad.getKey();
  if (customKey){
    password[enter]=customKey;
    lcd.print(customKey);
    enter++;
    on++;
  }
  
 if(on==4){
  if(!strcmp(password,match)){
    enter=0;
    delay(1000);
    lcd.clear();
    digitalWrite(ledG,HIGH);
    lcd.print("Correct Code!");
    delay(2000);
    lcd.clear();
    lcd.print("Permission");
    lcd.setCursor(1,1);
    lcd.print("granted");
    delay(2000);
    lcd.clear();
    lcd.setBacklight(0);
    digitalWrite(ledG,LOW);
  }
  
 if(!strcmp(password,off)){
    delay(1000);
    enter=0;
    lcd.clear();
    digitalWrite(ledB,HIGH);
    lcd.print("Exit!");
    delay(2000);
    lcd.clear();
    lcd.print("Good bye!");
    delay(2000);
    digitalWrite(ledB,LOW);    
    lcd.clear();
    lcd.setBacklight(0);
  }
  
  if(strcmp(password,match)){
    if(strcmp(password,off)){
    delay(1000);
    enter=0;
    lcd.clear();
    digitalWrite(ledR,HIGH);
    lcd.print("Wrong Code!");
    delay(2000);
    lcd.clear();
    lcd.print("Permission");
    lcd.setCursor(1,1);
    lcd.print("denied");
    delay(2000);
  digitalWrite(ledR,LOW);     
    lcd.clear();
    lcd.print("PassCode:");
    }
  }
  on=0;
  }
}
 