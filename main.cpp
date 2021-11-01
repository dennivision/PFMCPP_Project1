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
//  action 1:
car.start();
//  action 2:
car.accelerate();
//  action 3:
car.applyBrake();
//  2)
//  Noun: steeringWheel
//  action 1:
steeringWheel.center();
//  action 2:
steeringWheel.rotateClockwise();
//  action 3:
steeringWheel.rotateCounterClockwise();
//  3)
//  Noun: soundCard
//  action 1:
soundCard.setBufferSize();
//  action 2:
soundCard.setSampleRate();
//  action 3:
soundCard.setClockSource();
//  4)
//  Noun: tapeMachine
//  action 1:
tapeMachine.play();
//  action 2:
tapeMachine.rewind();
//  action 3:
tapeMachine.stop();
//  5)
//  Noun: hammer
//  action 1:
hammer.hammer();
//  action 2:
hammer.pry();
//  action 3:
hammer.discard();
//  6)
//  Noun: uzi
//  action 1:
uzi.reload();
//  action 2:
uzi.aim();
//  action 3:
uzi.fire();
//  7)
//  Noun: wire
//  action 1:
wire.connect();
//  action 2:
wire.disconnect();
//  action 3:
wire.chooseColor();
//  8)
//  Noun: bottle
//  action 1:
bottle.open();
//  action 2:
bottle.fill();
//  action 3:
bottle.seal();
//  9)
//  Noun: clock
//  action 1:
clock.setTime();
//  action 2:
clock.start();
//  action 3:
clock.setAlarm();
//  10)
//  Noun: string
//  action 1:
string.tune(float freq);
//  action 2:
string.finger(int fret);
//  action 3:
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
