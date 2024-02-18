## LoveBot 💘
LoveBot is a generative art piece that randomizes the position of stars and text on the screen, wishing the viewer a happy valentines day! It was created to spead joy for those who need a bit of love. It was built using an ESP32 TTGO T-display and a battery. Below you can find all of the information to reproduce LoveBot.

#### Supplies

| ESP32 TTGO T-display  | Crimp pin connectors  | Heat gun | Popsicle stick  |
| --------------------- | ---------------------- | -------- | ---------------- |
| **Battery**               | **Wire crimper**           | **Soldering iron** | **String**  |
| **Wires**                 | **Heat shrink**            | **Paper**    | **Markers**  |


| First Header  | Second Header | Third Header | Fourth Header |
| ------------- | ------------- | ------------ | ------------- |
| ESP32 TTGO T-display  | Crimp pin connectors  | Heat gun | Popsicle stick  |
| Battery  | Wire crimper | Soldering iron | String  |
| Wires  | Heat shrink  | Paper | Markers  |



#### Battery Conservation
A main functionality of the program is it's ability to enter sleep mode to conserve the battery level (which is displayed on the screen). To enter sleep mode, click the button on the left side of the ESP32 as shown below. To turn the screen back on, click the reset button on the right, also shown below. 

Another way to conserve battery is dimming the screen. To dim the screen you can change the second parameter of ledcWrite(0, 250). The higher you make it the brighter it becomes and the lower, the darker. The image on the left has ledcWrite(0, 250) and the image on the right has ledcWrite(0, 5).

![TTGO with different brighness settings](https://github.com/kyarasto/Module_One/assets/113846467/f01b6ae2-dde7-4938-b8f7-2270715dc31d)


## Reproducing LoveBot

#### Loading the code onto the TTGO

To load the code found in the _moduleIOneInstall.ino file into the ESP32...
- Open the Ardunio IDE and install the esp32 by Espressif in the boards manager.
- Then install the TFT_eSPI libaray in "Manage Libraries" found in the Tools tab to be able to create sprites.

- Create a new sketch. Add the code in the _moduleIOneInstall.ino file of this repo to the sketch and upload it onto your ESP32. 
- *NOTE* : If you have errors uploading make sure to go to "Tools" and then "Upload Speed" and change the upload speed to 115200.

#### Customizing the Code
Apart from changing the brightness of the screen you can customize the colors of everything, paramaters of the positioning, or even create more stars. To create more stars just change the parameters of the for loop that creates the stars, the more times the loop runs the more stars are created.  

#### Adding the battery to LoveBot

1) To add the battery to LoveBot we first set it up. To prepare the battery, it needs to be soldered to wires. To prepare the connector that will attach the battery and LoveBot, strip both red and black wires and wrap them around the crimp pin connector. **Once it is crimped which secures the physical connection, add a bit of solder to secure the electrical connection.** Image 1 shows how the battery and connecter should look at this point.
   
2) The next step is important to ensure the black and red wires don't touch. On the connector, cut some heat shrink and place it on the part where we attached the crimp pin connector. Use a heat gun to shrink it onto the wires. Make sure to leave enough space to plug it into the battery. Image 2 shows the process of using the heat gun.


![Putting together the battery](https://github.com/kyarasto/Module_One/assets/113846467/0bd08c16-438b-43a2-860e-6cfc3a0007a0)

3) Now, we are ready to connect the battery to the ESP32! Plug the small plastic piece on the other side of the connector, into the ESP32 as shown in image 3.
   
4) Now plug the two wires on the end of the connector into the battery and the final product is shown in image 4. 
   
![Attaching the battery and the lovebot](https://github.com/kyarasto/Module_One/assets/113846467/13965eb3-8d40-46e8-b09c-eeba46516707)

#### Creating the envelope and Installation

**The AI files of the envelope created by Eris Gao can be found and downloaded in this repo's files**
1) Once you have the envelope printed and folded, go crazy! Decorate it however and with whatever you want :) Then place the LoveBot into the envelope with the screen in the hole and tape it closed (as seen in image 1).

2) Then you will need string, a popsicle stick and something to poke a hole into the envelope wherever you choose. wrap the string around the popsicle stick and tie it. Then string the thread through the hole in the envelope and tie it. This should all look like image 1. 

3) Now you can do the installation and use the popsicle to hang your LoveBot (as shown in image 2).


![Creating the envelope and installation](https://github.com/kyarasto/Module_One/assets/113846467/06b2abbd-d2aa-448b-b57e-6c61314ae900)
