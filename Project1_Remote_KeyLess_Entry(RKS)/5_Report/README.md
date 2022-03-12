# Folder Structure of Project1: Remote KeyLess Entry (RKE)
| Folder Name | Contents |
|---|---|
| 0_Table of content | topics coverd in this project |
| 1_Requirements | README.md (Description, Features, 5W's & 1H, S.W.O.T, Requirements)  |
| 2_Architecture | README.md (Behavioral Diagrams,Structural UML Diagram) |
| 3_Implementation | source code , hex files |
| 4_TestPlanAndOutput | README.md(High level and Low level Test plan) |
| 5_Report | Report.pdf, Report.dox |
| 6_ImagesAndVideos | All images with simulation video |
| 7_Others | Simulation of the project using simulide|

 ## Remote keyless entry (RKE) 
Remote keyless entry (RKE) is an electronic access system that can be controlled from a distance. RKEs, which are typically used to remotely lock or unlock doors, require the end user to initiate an action that will cause a physical or software key fob to transmit a radio signal to a receiver that controls an electronic lock. Typically, the action is to press a button on a physical fob or mobile app.
Remote keyless entry, which is commonly used to protect vehicles from theft, can be contrasted with passive keyless entry (PKE), which does not require any action on the part of the end user. 
Other than controlling locks, RKE systems for cars can be used to control the vehicle's ignition system, security alarm, horn, lights and trunk. RKEs are also used to control entry to premises and specific areas of buildings, such as garages. While the use of RKE is uncommon on buildings outside of businesses, some home automation and security systems rely on the technology as well.
## Survey
Automobiles have already conquered the transportation industry as it became a basic part of the society. Since then, different cars and vehicles were manufactured, each model exceeding the features of the last one made. Along with the exponential growing needs for innovations of automobiles is the demand for its security. Perhaps the most widely used application when it comes to car security is the remote keyless entry (RKE) systems.
Remote keyless entry (RKE) has captivated automobile buyers, as evidenced by the popularity of RKE on new automobiles and as an after-market item. This application note provides an overview of RKE systems and discusses how they meet requirements such as range, battery life, reliability, cost, and regulatory compliance. It shows some circuits and design approaches and offers some predictions for future systems, which will include two-way communications.

Remote keyless entry (RKE) systems have become extremely popular. The installation rate for RKE systems in new vehicles is more than 80% in North America and more than 70% in Europe. Besides the obvious advantages of convenience, RKE-actuated vehicle-immobilization technology minimizes car theft. European automakers are incorporating the technology in vehicles in cooperation with insurance companies, who in turn, require it as a condition for acquiring auto insurance. That trend began in Germany, and is expected to spread throughout Europe within a few years. Most of these systems employ one-way (simplex) communications. But second- and third-generation systems may talk back to the key, telling you that the car needs gas or more pressure in the left front tire.

## HIGH LEVEL REQUIREMENTS
HLR     | DESCRIPTION
--------|-----------------------
HLR_1.0 |It shall remotely lock and unlock the automobile.
HLR_2.0 |Transmit-Recieve Range shall be wide.
HLR_3.0 |Anti-theft system shall be there.
HLR_4.0 |It shall have Bi-directional radio communication.
HLR_5.0 |Receiver's sensitivity (The receiver shall be able to wake-up very fast) and transmit power shall be high.
 

## LOW LEVEL REQUIREMENTS
LLR     | DESCRIPTION
--------|---------------------------------------------
LLR_1.0 |Battery life shall be good.
LLR_2.0 |Cost shall be minimum.
LLR_3.0 |It shall have keyless ignition feature.
LLR_4.0 |pushbutton switch shall be there in the key to turn on/off features.
LLR_5.0 |Push button for horn or buzzer.

## BLOCK DIAGRAM

![Screenshot (14)](https://user-images.githubusercontent.com/98890597/157713993-8ea4025d-05fe-4789-9209-0dd412784388.png)

An RKE system consists of an RF transmitter in the keyfob (or key) that sends a short burst of digital data to a receiver in the vehicle, where it is decoded and made to open or close the vehicle doors or the trunk via receiver-controlled actuators. The wireless carrier frequency, is currently 315MHz in the US/Japan and 433.92MHz (ISM band) in Europe. In Japan the modulation is frequency-shift keying (FSK), but in most other parts of the world, amplitude-shift keying, or ASK is used. 

--------------------------------------------------
## Detailed RKE Description and Design Objectives 

Typical RKE systems include a microcontroller in the key or keyfob. You unlock the car by pressing a pushbutton on the key that wakes up the microcontroller. The microcontroller sends a stream of 64 or 128 bits to the key’s RF transmitter, where it modulates the carrier and is radiated through a simple printed-circuit loop antenna. (Though inefficient, a loop antenna fabricated as part of the PC board is inexpensive and widely used.)

![Block diagram](https://user-images.githubusercontent.com/80105220/157846585-85b275c2-4f5b-46dd-9952-0a61175e9636.jpg)

In the vehicle, an RF receiver captures that data and directs it to another microcontroller, which decodes the data and sends an appropriate message to start the engine or open the door. Multibutton keyfobs give the choice of opening the driver’s door, or all doors, or the trunk, etc.

The digital data stream, transmitted between 2.4kbps and 20kbps, usually consists of a data preamble, a command code, some check bits, and a “rolling code” that ensures vehicle security by altering itself with each use. Without this rolling code, your transmitted signal might accidentally unlock another vehicle or fall into the hands of a car thief who could use it to gain entry later.

Several major objectives govern the design of these RKE systems. Like all mass-produced automotive components, they must offer low cost and high reliability. They should minimize power drain in both transmitter and receiver, because replacing batteries in a keyfob is a nuisance and recharging the car battery is a major nuisance. In addition to these requirements, the RKE system designer must juggle receiver sensitivity, carrier tolerance, and other technical parameters to achieve maximum transmission range within the constraints imposed by low cost and minimum supply current.

--------------------------------------------
## Flow chart

### High Level Flow chart

![high level](https://user-images.githubusercontent.com/46968935/157974943-66b63f9c-dceb-4ef8-805e-057e88db3fb1.PNG)

### Low Level Flow Chart

![low level](https://user-images.githubusercontent.com/46968935/157974941-bad40ef8-8dc3-4988-8550-5f13d8e7f641.PNG)

# 1.1 HIGH LEVEL TEST PLAN

| Test ID | Description | Expected Input | Expected output | Actual Output | 
| ---     | ---         | ---   | ---             | ---           | 
| 01 | Car Lock | User Button Pressed 1 time | Car locked |  Car locked  | 
| 02 | Car Unlock | User Button Pressed 2 times |  Car unlocked  |  Car unlocked  | 
| 03 | Alarm activation/deactivation | User Button Pressed 3 times | Alarm activated/deactivated | Alarm activated/deactivated | 
| 04 | Approach Light | User Button Pressed 4 times | Approch Light On | Approach Light On | 

---
# 1.2 LOW LEVEL TEST PLAN


| Test ID (for LED)| Description | Input | Expected output | Actual Output | passed/not |
| --- | --- | --- | --- | --- | --- |
| 01 | Check if All LED's Are On | User Button Pressed 1 time| All LEDs ON |All LEDs ON | PASS |
| 02 | Check if All LED's Are Off |User Button Pressed 2 times | All LEDs OFF | All LEDs OFF | PASS |
| 03 | Check if LED's work in Clockwise direction |User Button Pressed 3 times | LED ON Clockwise Rotation | LED ON Clockwise Rotation | PASS | 
| 04 | Check if LED's work in AntiClockwise direction | User Button Pressed 3 times |LED ON Anticlockwise Rotation | LED ON Anticlockwise Rotation | PASS |
------