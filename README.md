On your github repo add a readme that contains a short description and key information on reproducibility/installation/usage. 
This key information should be sufficient for a knowledge third party, outside the class, to replicate your design. 
This readme can be a subset of the material used in your blog post.
## LoveBot 💘
LoveBot is a generative art piece that randomizes the position of stars and text on the screen, wishing the viewer a happy valentines day! It was created to spead joy for those who need a bit of love. It was built using an ESP32 TTGO T-display and a battery. Below you can find all of the information to reproduce LoveBot.

#### Battery Conservation
A main functionality of the program is it's ability to enter sleep mode to conserve the battery level which is displayed on the screen. To enter sleep mode, click the button on the left side of the ESP32 as shown below. To turn the screen back on, click the reset button on the right, also shown below. 

Another way to conserve battery is dimming the screen. To dim the screen you can change the second parameter of ledcWrite(0, 250). The higher you make it the brighter it becomes and the lower, the darker. The image on the left has ledcWrite(0, 250) and the image on the right has ledcWrite(0, 5).

![TTGO with different brighness settings](https://github.com/kyarasto/Module_One/assets/113846467/f01b6ae2-dde7-4938-b8f7-2270715dc31d)


## About this Document


## How To Use

#### Loading the code onto the TTGO

To load the code found in the _moduleIOneInstall.ino file into the ESP32...
- Open the Ardunio IDE and install the esp32 by Espressif in the boards manager
- Then install the TFT_eSPI libaray in "Manage Libraries" found in the Tools tab.

- Create a new sketch and add in the code in the _moduleIOneInstall.ino file of this repo and upload onto your ESP32. 
- *NOTE* : If you have errors uploading make sure to go to "Tools" and then "Upload Speed" and change the upload speed to 115200.

#### Adding the battery to LoveBot

To add the battery 
![Putting together the battery](https://github.com/kyarasto/Module_One/assets/113846467/0bd08c16-438b-43a2-860e-6cfc3a0007a0)
![Attaching the battery and the lovebot](https://github.com/kyarasto/Module_One/assets/113846467/13965eb3-8d40-46e8-b09c-eeba46516707)


## User Interface




## Hardware


## Software
- arduino 
