# ESP32-JTAG
Minimal ESP32 project with JTAG debugger ESP-Prog

https://docs.platformio.org/en/latest/plus/debug-tools/esp-prog.html

# Wiring ESP-Prog

## JTAG Connector
### JTAG debugging connection

|| ESP-Prog Pin | ESP32 Pin     |
|:-: |    :-:   |    :-:        |
| 1  | VJTAG    | 3V3           |
| 3  | GND      | GND           |
| 5  | GND      | GND           |
| 7  | GND      | GND           |
| 9  | GND      | GND           |
| 2  | TMS      | GPIO14 / MTMS |
| 4  | TCK      | GPIO13 / MTCK |
| 6  | TDO      | GPIO15 / MTDO |
| 8  | TDI      | GPIO12 / MTDI |
| 10 | NC       |               |



## PROG Connector
### Serial port for uploading/monitoring

|| ESP-Prog Pin | ESP32 Pin      |
| :-: |    :-:  |    :-:         |
| 1   | EN      | EN / CHIP_PU   |
| 3   | TxD     | GPIO01 / U0TxD |
| 5   | RxD     | GPIO03 / U0RxD |
| 2   | VProg   |                |
| 4   | GND     |                |
| 6   | IO0     | GPIO0          |


![image](https://embeddedcomputing.weebly.com/uploads/1/1/6/2/11624344/esp32-pico-prog_orig.png)
https://embeddedcomputing.weebly.com/uploads/1/1/6/2/11624344/esp32-pico-prog_orig.png


