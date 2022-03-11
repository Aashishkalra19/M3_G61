## BLOCK DIAGRAM

![Screenshot (14)](https://user-images.githubusercontent.com/98890597/157713993-8ea4025d-05fe-4789-9209-0dd412784388.png)

An RKE system consists of an RF transmitter in the keyfob (or key) that sends a short burst of digital data to a receiver in the vehicle, where it is decoded and made to open or close the vehicle doors or the trunk via receiver-controlled actuators. The wireless carrier frequency, is currently 315MHz in the US/Japan and 433.92MHz (ISM band) in Europe. In Japan the modulation is frequency-shift keying (FSK), but in most other parts of the world, amplitude-shift keying, or ASK is used. 
## Detailed RKE Description and Design Objectives 

Typical RKE systems include a microcontroller in the key or keyfob. You unlock the car by pressing a pushbutton on the key that wakes up the microcontroller. The microcontroller sends a stream of 64 or 128 bits to the key’s RF transmitter, where it modulates the carrier and is radiated through a simple printed-circuit loop antenna. (Though inefficient, a loop antenna fabricated as part of the PC board is inexpensive and widely used.)

![Block diagram](https://user-images.githubusercontent.com/80105220/157846585-85b275c2-4f5b-46dd-9952-0a61175e9636.jpg)

In the vehicle, an RF receiver captures that data and directs it to another microcontroller, which decodes the data and sends an appropriate message to start the engine or open the door. Multibutton keyfobs give the choice of opening the driver’s door, or all doors, or the trunk, etc.

The digital data stream, transmitted between 2.4kbps and 20kbps, usually consists of a data preamble, a command code, some check bits, and a “rolling code” that ensures vehicle security by altering itself with each use. Without this rolling code, your transmitted signal might accidentally unlock another vehicle or fall into the hands of a car thief who could use it to gain entry later.

Several major objectives govern the design of these RKE systems. Like all mass-produced automotive components, they must offer low cost and high reliability. They should minimize power drain in both transmitter and receiver, because replacing batteries in a keyfob is a nuisance and recharging the car battery is a major nuisance. In addition to these requirements, the RKE system designer must juggle receiver sensitivity, carrier tolerance, and other technical parameters to achieve maximum transmission range within the constraints imposed by low cost and minimum supply current.


