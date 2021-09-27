# Arduino-Aquaponics
This is a homemade, backyard friendly project that completely automates an aquaponics system from the fish feeder to the pump that cycles water. This a scable model designed to grow 10 Blue Strain Tilapia and a couple of plants in your backyard. Before we begin check government regulations for owning fish in your local area. The purpose of this project is to create a self-sustaining ecosystem in your backyard with live plants and fish that can be harvested. In this system I will be using Blue pure strain tilapia as they grow rapidly (from fingerling to adult in less than a year) and can survive cold environments (a minimum of 8 celcius). 


<img width="282" alt="Blue Tilapia" src="https://user-images.githubusercontent.com/81518926/134826893-5649e56d-c411-4fbd-8405-54030dd40dd5.png">

# Materials
* Any 6 to 12 volt water pump
* About 1 meter of tubing
* 1 kilo of clay pebbles
* 1 100 liter plastic tub
* 4-6 plants of your choosing preferably green plants that will not consume too much nutrients from the water
* 10 Tilapia or fish of your choosing https://lakewaytilapia.com/Live_Tilapia_For_Sale.php 
* Arduino uno
* Jumper wires
* 9 volt dc adapter
* 9 volt jack wall power adapter
* arduino motor shield V1
* 1 mini servo motor
* 3D printer
* Super Glue
* 2 Standard machine screws and bolts
* 2 screws that already come packaged with the servo
* 1 large clear plastic container (I reccomend 100L tub)

# Instructions for setup
Begin by soldering jumper wires to the 9 volt dc adapter and connect it to the input of the arduino motor shield. Plug in your servo directly to the servo pins at the top left which will be referrenced as pin 10 in the code. Then upload the arduino file called feeder_and_pump_code.ino to you arduino uno. Next you can attach the pump directly to the 9 volt pin and GND as we will need the pump to run constantly. Now that we have the arduino setup we can 3D print all the required files for the automatic fish feeder. Further docuementation for the STL files will be linked below as I am not the sole owner of them. Now that we have the electronic components of the project working we can begin the physical construction of the tank and grow bed.

# Tank Setup
<img width="500" alt="Aquaponics graph" src="https://user-images.githubusercontent.com/81518926/134841350-da74a37e-68fc-4b62-8f13-e5f797e2802d.png">

This is a basic diagram of what we want to create where the water is filtered through the roots of the plants and the plants convert the ammonia waste which is toxic to the fish to nitrates. We will need to create our own 
