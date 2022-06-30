### Problem
Make a simulation of a scientific principle.  
This type of project has been implemented before by many others, so in order to customize it to my own liking, I added a different approach on the implementation of openGl in the main.cpp file, as shall be described bellow.

### Solution
I chose to simulate the "[Solids Of Revolution](https://en.wikipedia.org/wiki/Solid_of_revolution)" which refers to the surfaces that are formed from rotating mathematical functions about one of the Cartesian axes, check the link for more details.

##
To run program, read the howtoruntheproject.txt file and follow the instructions, otherwise, view the demo gif at the uri provided at the end of this readme.me file
## Ingnore The Mathematics!
Since this project is meant to showcase the implementation of grapics development using openGL, the mathematical and scientific principles detailed bellow can be ingored, only to interact with the models can the commands listed below be considered.

#### First Of All
I wanted to make the program __as general as possible__, so I implemented a simple expression parser, which takes a string consisting of mathematical expression and parses it into programmable object.  
The parser (in files Exp.h, Exp.cpp) accepts all kinds of polynomials with all their forms, using **^** for exponentiation, e.g. "`x`", "`x^2`", "`2x^4`" + "`2x + 5`", "`x^2 + 4x + 12`", etc. (spaces are totally ignored)  
It also accepts trig and heyper-polyic functions with the limitation that they can only have "x" as their parameter, but they can have coefficients and powers (for the function itself) no problem, e.g. "`sin(x)`", "`2 cos(x)`", "`3 tanh(x)^2`", "`5 acos(x)^2 + 12 x^2`", etc.  
I then used this expression parser to feed the functions into the plotter-part of the program which then plotted and revolved the equation about the desired axes (x or y).

### Second Of All
I plot the function provided by the parser and repeat it several times (about 3600) with different rotation each time to show the final __Solid__ shape.  
When the shape was plotted for the first time, I had a problem with showing that it's actually a 3D shape, so I put all sorts of lights (ambient, directional and specular) to show the depth and curvature of the shape. (this part is alot easier said than done, really!)  
Last but not least I added the functionality for the user to change the angle and the position of the camera with respect to the plot for a better viewing of the formed shape, the user can move up and down with `W` and `S`, they can also rotate the graph with `A` and `D`.

#### GIF Of The Program Execution
![Execution GIF](https://i.imgur.com/YyxaFzB.gif)
