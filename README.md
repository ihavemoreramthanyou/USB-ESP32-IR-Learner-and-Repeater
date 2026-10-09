# USB ESP32 IR Learner and Repeater

A USB-powered infrared learning and repeating device based on the ESP32-S3.

The board can receive IR remote-control signals using a Vishay IR receiver, process/store them with the ESP32-S3, and retransmit them using a high-power IR LED driven through a MOSFET.

The board is powered through USB-C and includes native USB data connections to the ESP32-S3 so it can eventually be controlled or configured from a computer.

## Parts:

- ESP32-S3-WROOM-1
- USB-C power and data
- IR receiver
- IR transmitter
- MOSFET-driven IR LED
- Boot and reset buttons
- 5V to 3.3V regulator
- Designed in KiCad

## Current status

PCB V1.0 is fully routed and passes KiCad ERC/DRC aside from a known USB-C footprint hole-clearance issue that will be checked against the PCB manufacturer's fabrication rules.

Firmware is still in development.

## PCB

<img width="713" height="530" alt="image" src="https://github.com/user-attachments/assets/e844d090-1214-445a-b617-948091d2484a" />

## How it works

An infrared remote is pointed at the IR receiver on the board.

The receiver demodulates the incoming IR signal and sends the resulting digital signal to the ESP32-S3.

The ESP32 can then analyze or store the received IR data. To retransmit a signal, the ESP32 drives the IR transmitter circuit through a MOSFET, which switches the IR LED.

USB-C provides power as well as a USB connection to the ESP32-S3.

## Project status

- [x] Schematic
- [x] PCB layout
- [x] Routing
- [x] ERC
- [x] DRC cleanup
- [ ] Final BOM
- [ ] Firmware
- [ ] Fabrication files
- [ ] Physical prototype
- [ ] Hardware testing
