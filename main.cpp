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
//  action 1: the car's engine is started
car.start();
//  action 2: the car's accelerator is pressed causing it to accelerate if its engine was started and its in gear
car.accelerate();
//  action 3: the car's brakes are applied causing it to slow down if its moving
car.applyBrake();
//  2)
//  Noun: steeringWheel
//  action 1: the steering wheel is restored to its center position
steeringWheel.center();
//  action 2: the steering wheel is rotated clockwise
steeringWheel.rotateClockwise();
//  action 3: the steering wheel is rotated counter-clockwise
steeringWheel.rotateCounterClockwise();
//  3)
//  Noun: soundCard
//  action 1: the soundCard drivers are set to reserve a certain number of samples as the working buffer size 
soundCard.setBufferSize();
//  action 2: the soundCard driver is set to encode/decode a specified number of samples per second
soundCard.setSampleRate();
//  action 3: the soundCard driver is set to follow the sample rate of an external device
soundCard.setClockSource();
//  4)
//  Noun: tapeMachine
//  action 1: the tapeMachine's transport starts moving forward and the media is decoded
tapeMachine.play();
//  action 2: the tape machines transport is accellerated in reverse until play, stop commands are issued or the start of the media is reached
tapeMachine.rewind();
//  action 3: the tape machine's transport is stopped
tapeMachine.stop();
//  5)
//  Noun: hammer
//  action 1: the hammer is used to strike an object
hammer.hammer();
//  action 2: the hammer is used to pry an object
hammer.pry();
//  action 3: the hammer is discarded
hammer.discard();
//  6)
//  Noun: uzi
//  action 1: the uzi's ammunition is filled to the maximum capacity
uzi.reload();
//  action 2: the uzi is pointed at a target
uzi.aim();
//  action 3: the uzi is fired at the target (if the aim had been set and if there is more than zero ammunition)
uzi.fire();
//  7)
//  Noun: wire
//  action 1: a wire is connected between an output and an input
wire.connect();
//  action 2: a wire is disconnected from all connected outputs and inputs
wire.disconnect();
//  action 3: the color of the wire is changed to a new color
wire.chooseColor();
//  8)
//  Noun: bottle
//  action 1: the bottle's lid is removed
bottle.open();
//  action 2: the bottle is filled with material if the lid is open
bottle.fill();
//  action 3: the bottle's lid is replaced
bottle.seal();
//  9)
//  Noun: clock
//  action 1: the clock's current time is set
clock.setTime();
//  action 2: the clock begins counting time 
clock.start();
//  action 3: the clock's alarm time is set so a notification will be issued when the current time matches the alarm time
clock.setAlarm();
//  10)
//  Noun: string
//  action 1: a string's tension is adjusted so its base or "open" frequency is equal to the specified frequency (in Hz or vibrations per second)
string.tune(float freq);
//  action 2: a strings overall length is temporarily reduced by fingering the string at a specified fret causing it to vibrate at a higher frequency - fret numbers should be between 0 and 24. Every 12 frets will double the frequency which the string vibrates at (12th fret - 2*F, 24th fret = 4*f)
string.finger(int fret);
//  action 3: a string is stretched and released causing it to vibrate at the frequency determined by its tuning and the current fingering.
string.pluck();


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