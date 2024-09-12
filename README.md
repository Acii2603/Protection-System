# Sistem de Protecție – Afișaj LCD I2C – LED RGB – KeyPad 4x4

## Autor
Ionita Alexandru Andrei  
322CA - 2024

## I. Descriere proiect

Placa Arduino este interconectată cu un tastator 4x4, un LED RGB și un afișaj LCD I2C folosind fire de tip male to female. Atunci când utilizatorul introduce o parolă prin intermediul tastatorului, Arduino verifică corectitudinea parolei, comparând-o cu o parolă predefinită în cod. Inițial, pe ecranul LCD se va afișa mesajul "PassCode:", urmat de parola introdusă de către utilizator.

- Dacă parola este corectă, LED-ul RGB se va aprinde verde și pe afișajul LCD va fi afișat mesajul "Correct Code!", urmat de "Permission granted", iar ulterior ecranul LCD se va stinge.
- Dacă parola este incorectă, LED-ul RGB se va aprinde roșu și pe afișajul LCD va fi afișat mesajul "Wrong Code!", urmat de "Permission denied", iar ulterior se va reveni meniul inițial de "PassCode:".
- Dacă se introduce codul de exit, LED-ul RGB se va aprinde albastru și pe afișajul LCD va fi afișat mesajul "Exit!", urmat de "Goodbye!", iar ulterior ecranul LCD se va stinge.

Această configurație integrează mai multe componente pentru a crea un sistem de securitate funcțional și flexibil. Tastatorul permite introducerea parolei, LED-ul RGB oferă un indicator vizual al stării sistemului, în timp ce afișajul LCD I2C furnizează informații suplimentare utilizatorului.

## II. Descriere Componente

### Afișaj LCD I2C
Un afișaj LCD I2C reprezintă o variantă de afișaj LCD care utilizează protocolul I2C pentru a comunica cu controllerul sau microcontrollerul. Acest tip de afișaj se remarcă prin eficiența sa în utilizarea pinilor, deoarece protocolul I2C permite comunicarea cu mai multe dispozitive folosind doar 2 pini (SDA și SCL). Afișajul LCD I2C constă într-un ecran LCD și un controler I2C responsabil de comunicarea cu microcontrollerul. Controlerul poate fi integrat direct în ecran sau poate reprezenta o componentă separată, conectată la ecran prin intermediul unor pini.

Pentru a utiliza un afișaj LCD I2C, este necesar să se conecteze pinii SDA și SCL la corespondenții lor pe microcontroller și să se inițializeze comunicarea I2C. Ulterior, se pot transmite comenzi și date către afișaj prin protocolul I2C, permitând afișarea informațiilor pe ecran.

### Keypad 4x4
Un tastator 4x4 reprezintă un dispozitiv de intrare format din 16 butoane dispuse într-o grilă de 4x4. Fiecare buton corespunde, în general, unui caracter numeric (0-9), unei litere (A-D) sau unui simbol (* și #). Cei patru pini ai fiecărui buton reprezintă legături mecanice care conectează întrerupătorul din interiorul butonului la circuitele externe.

Butoanele sunt conectate la placa Arduino prin intermediul pinilor digitali, facilitând astfel configurarea acestora.

### LED RGB
Un LED RGB (roșu, verde, albastru) reprezintă un tip de diodă emițătoare de lumină capabilă să genereze lumina în trei culori distincte: roșu, verde și albastru. Aceasta se realizează prin reglarea nivelurilor de curent electric prin cele trei LED-uri individuale integrate în interiorul dispozitivului RGB. Prin intermediul unei comenzi, este posibil să obținem o diversitate de culori, ajustând proporțiile de roșu, verde și albastru.

Controlul unui LED RGB poate fi efectuat fie prin intermediul unui controlor RGB dedicat, fie prin utilizarea unui microcontroller Arduino.

### Arduino UNO
Arduino UNO se distinge ca o placă de dezvoltare microcontroller, bazată pe microcontrollerul AVR ATMega328P, fabricată de Arduino. Aceasta este populară datorită accesibilității și performanțelor sale remarcabile.

Cu o memorie flash de 32 KB, 2 KB SRAM și 1 KB EEPROM, placa operează la o frecvență de 16 MHz și este compatibilă cu majoritatea sistemelor de operare. Programarea este simplificată prin intermediul mediului de dezvoltare integrat (IDE).

## III. Lista Componente Utilizate

| Nr | Componenta            |
|----|-----------------------|
| 1  | Placa Arduino UNO      |
| 2  | Afișaj LCD I2C         |
| 3  | Keypad 4x4             |
| 4  | LED RGB                |
| 5  | Fire tip male to female|
| 6  | Cablu USB pentru Arduino|

## IV. Diagrama Circuit
![image](https://github.com/user-attachments/assets/d40854e4-c667-4707-9ef5-288e38ec00fd)
