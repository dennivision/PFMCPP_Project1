#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
This project will also introduce you to the review process, and how Pull Requests work.
I will request a change be made to one of your 10 nouns for the sole purpose of showing how the review process works.

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    If your noun consists of multiple words, use camelCaseToNameIt.
 
 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.

        
 3) write out how you'd call that action in pseudo code, in the space after the plain-english action
 
 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates CamelCase


//  1)
//  Noun: car
//  action 1: the car's engine starts
car.startEngine();
//  action 2: the car accelerates
car.accelerate();
//  action 3: the car decelerates
car.decelerate();
//  2)
//  Noun: submarine
//  action 1: the submarine dives
submarine.dive();
//  action 2: the submarine surfaces
submarine.surface();
//  action 3: the submarine extends its periscope 
submarine.extendPeriscope();
//  3)
//  Noun: multimeter
//  action 1: the multimeter measures a dc voltage
multimeter.measureDCVoltage();
//  action 2: the multimeter measures an ac voltage
multimeter.measureACVoltage();
//  action 3: the multimeter meaures an ac frequency
multimeter.measureACFrequency();
//  4)
//  Noun: tapeMachineTransport
//  action 1: the tapeMachine's transport moves forward
tapeMachineTransport.moveForward();
//  action 2: the tape machines transport moves backward 
tapeMachineTransport.moveBackward();
//  action 3: the tape machine's transport stops
tapeMachineTransport.stop();
//  5)
//  Noun: monitor
//  action 1: the monitor selects its hdmi1 input
monitor.selectInputHDMI1();
//  action 2: the monitors power turns on
monitor.powerOn();
//  action 3: the monitors volume is turned up
monitor.volumeUp();
//  6)
//  Noun: bluRayPlayer
//  action 1: the bluRayPlayer's tray is opened
bluRayPlayer.openTray();
//  action 2: the bluRayPlayers menu is displayed
bluRayPlayer.displayMenu();
//  action 3: the bluRayPlayer advances to the next chapter
bluRayPlayer.nextChapter();
//  7)
//  Noun: wire
//  action 1: a wire connects a source to a destination
wire.connectSourceToDestination();
//  action 2: a wire is disconnected from a source
wire.disconnectSource();
//  action 3: a wire is disconnected from a destination
wire.disconnectDestination();
//  8)
//  Noun: barista
//  action 1: the barista makes a double espresso
barista.makeDoubleEspresso();
//  action 2: the barista makes a vanilla latte
barista.makeVanillaLatte();
//  action 3: the barista goes home
barista.goHome();
//  9)
//  Noun: clock
//  action 1: the clock's current time is set
clock.setTime();
//  action 2: the clock begins counting time 
clock.start();
//  action 3: clock sets its alarm 
clock.setAlarm();
//  10)
//  Noun: guitarist
//  action 1: a guitarist tunes a guitar string to the specified frequency
guitarist.tuneGuitarStringToFrequency(int string, float freq);
//  action 2: a guitarist fingers a guitar string at the specified fret
guitarist.fingerGuitarStringAtFret(int string, int fret);
//  action 3: a guitarist plucks a guitar string
guitarist.pluckGuitarString(int string);


#endif

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}