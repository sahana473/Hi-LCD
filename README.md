## Abstract

             This project uses a simple 16x2 LCD which is interfaced to the Arduino Uno to display “HI” on the LCD screen.

## Hardware Components:

 - Arduino Uno
 - LCD 16x2 with Hitachi HD44780 chipset

## Development Tools Used:

 - PROTEUS 8 - for simulation
 - Arduino - for programming

## Hardware Connection:

 - LCD D4 pin to D5 of Arduino Uno
 - LCD D5 pin to D4 of Arduino Uno
 - LCD D6 pin to D3 of Arduino Uno
 - LCD D7 pin to D2 of Arduino Uno
 - LCD RS pin to D12 of Arduino Uno
 - LCD EN pin to D11 of Arduino Uno
 - LCD R/W pin to Ground

## Usage:

- Download the schematic.pdsprj file->open in PROTEUS 8 tool.

![LCD](https://user-images.githubusercontent.com/84024571/132992641-86b9db0b-fd35-4664-9e29-aeab9d0ebd1d.PNG | width=100)

- Download code.ino and open in Arduino tool.
- Click on “Verify” button and copy the hex file path from the following log window.

![A window ](https://user-images.githubusercontent.com/84024571/132992915-45f3b0bf-37e7-4e0c-bc12-97f35ae2aa9b.PNG)

- Go to PROTEUS 8->Click on Arduino Uno->Edit Component window will pop up ->paste the hex file path in Program file->Click OK.

![P Edit](https://user-images.githubusercontent.com/84024571/132992989-2161269d-0baf-4f56-9f3c-890b1d71bbe5.PNG)


- Click on the Run button.


## Output:

![output](https://user-images.githubusercontent.com/84024571/132993214-7ee41a31-3256-455c-ac43-4fb70d96169f.PNG)






