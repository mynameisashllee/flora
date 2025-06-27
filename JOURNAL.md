# journaling my journeying (17h total)

## 18-19 May (not very specifically documented sorry. i forgot)

okay! my idea for this whole project is basically a big ol pretty flower that opens up when you stand near it (so, arduino with distance sensor). i spent some time coming up with this idea because i really love making crafty flowers. i regularly make pipe cleaner/chenille and crepe paper flowers for my friends and birthdays and stuff!

if you don't believe me, here's my reference from valentine's day last year:
![bouquet](https://github.com/mynameisashllee/flora/blob/main/journalassets/18may/chenillebouquet.png?raw=true)

so i figured i'd motorise something like that. i found some stuff online like on pinterest but those flowers are like secretly protected by their makers so i'm going to have to improvise probably. i'm thinking of using an arduino, distance sensor and some servos.

this project is fairly mechanical, which means it's out of my pay grade for now. but we're here to learn! and of course my first step was to make a paper prototype-ish out of free foolscap i got handed outside my school.

![paper petal](https://github.com/mynameisashllee/flora/blob/main/journalassets/18may/paperpetal.png?raw=true)
![paper flower](https://github.com/mynameisashllee/flora/blob/main/journalassets/18may/paperflower.png?raw=true)

so i cut out some rough outlines, attached it to a circle and tied some string. then i tried playing around with it to figure out how the servos could get it to open and i got a rough idea. 

![animation!](https://github.com/mynameisashllee/flora/blob/main/journalassets/18may/servo.gif?raw=true)

i think for the actual thing instead of directly attaching the petals i'd want to use some bendy but half rigid plastic so it can snap back into place. because when i bend out the paper it crumples and doesn't go back to normal. and i think the string can be tucked into the circle too (maybe a bigger circle of foam board or smt) so there's more structure

alas, when i left for school and returned my paper flower was nowhere to be seen ): i guess someone assumed it was trash. rip

i guess over the next few days (or, i mean, after wednesday when i have an exam) i'd want to draw up a proper list of everything i need, wiring diagrams and maybe.. (ew) go on fusion.

update: i found a tiktok video of someone who actually did the same thing the internet is crazy. she put a mirror in the centre of the flower. i think that would be really cute.

time spent: 4 hours

## 21 May
just had an exam! yay! 2 things to do today - wiring and my bom

we did some wiring practice today - aka i learnt how to wire arduino stuff and got super intimidated. but it's actually not that deep surprisingly. i also found the models for the parts i plan to use which is good because bom!

![parts](https://github.com/mynameisashllee/flora/blob/main/journalassets/21may/parts.png?raw=true)

after googling a bunch and looking through a lot of other peoples' arduino wiring designs i got this abomination (actually, this wasn't the worst. this was halfway through me detangling it)

![oh](https://github.com/mynameisashllee/flora/blob/main/journalassets/21may/what.png?raw=true)

what the heck. i'm so sorry you had to see that.

anyway, we did it! 
![final](https://github.com/mynameisashllee/flora/blob/main/journalassets/21may/circuit.png?raw=true)

not actually using a 9v battery, 6v instead (4 aa batteries) which hopefully works..! i panicked a lot about this and went to my friend who's on the school robo team for advice but she said it was okay
![panic](https://github.com/mynameisashllee/flora/blob/main/journalassets/21may/panic.png?raw=true)

things i learnt:
- connect everything to ground and 5v on the breadboard
- dont connect power to arduino

and did the bom too (sort of, lol)

time spent: 3 hours but spread out

## 16 Jun
oops, it's been a while.

today i finally bothered to 3d model the design - the *rough* design. i'm thinking of using acrylic pipes to connect flower and base because it will likely save me a lot of time on modelling and deciding the size.

here's me going absolutely insane while modelling because it took REALLY, REALLY long!
![panic](https://github.com/mynameisashllee/flora/blob/main/journalassets/16jun/panic.gif?raw=true)

anyway, this should basically show the structure of how my project will look. since a lot of my materials are like paper/cardboard/pipe, i don't want to be very exact with it because it'll likely take some trial and error to get it right. hopefully these dramatic shots (and my 3d model) can give a rough overview, though!

![pic1](https://github.com/mynameisashllee/flora/blob/main/journalassets/16jun/flora.png?raw=true)
![pic2](https://github.com/mynameisashllee/flora/blob/main/journalassets/16jun/flora3.png?raw=true)

there are 8 props that will be used to hold up the petals, and string will attach the petals to the servos through the big cardboard centre. i wasted a lot of time trying to model the petals but here's a handy diagram of how they (and everything) should look.

![diagram](https://github.com/mynameisashllee/flora/blob/main/journalassets/16jun/annotate.png?raw=true)

i also did my firmware...! everything is in the production folder including wiring. truly appreciating online tutorials because they made my code and it's been forever since i used c++. i get why my friends who do robotics crash out all the time. i suspect that will be me soon.

next up i will finalise my bom... when i have the time.

time spent: 5 hours

## 17 Jun

took a break from studying today to finish up my BOM!

![tabs](https://github.com/mynameisashllee/flora/blob/main/journalassets/17jun/tabs.png?raw=true)

it has been done. i think i might submit now after a final few checks!

time spent: 1 hour

## 27 Jun

building!! my parts are all here and i was super excited to start.

![parts](https://github.com/mynameisashllee/flora/blob/main/journalassets/27jun/parts1.png?raw=true)

first order of business was making sure my electronics work. so i took everything and wired it according to my diagram.

![wired](https://github.com/mynameisashllee/flora/blob/main/journalassets/27jun/wired.png?raw=true)

so initially i was freaking out because when i uploaded my firmware: 1. there were syntax errors (thanks c++) because i forgot semicolons and variable definitions like everywhere 2. MY SERVOS DIDN'T WORK 

so i started on debugging and i realised that, like a fool, i had forgotten to link up my pwm drivers to my battery pack! aha! what a great solution, i thought to myself, pulling out my battery case for 4 aa batteries. turns out i had ordered the wrong one. it was for much bigger 3.7V batteries.

in order to actually test my code and stop crashing out i just linked it to the arduino and disconnected it from power like every 20 seconds while hoping it didn't get fried. i'll probably go get some normal battery packs soon. i'm also regretting getting such short wires because i'm not super sure how everything's going to look on the whole flower structure BUT whatever.

once my servos worked, i had some more logic errors which made the servos reset every time they ran the open and close functions 

![janked](https://github.com/mynameisashllee/flora/blob/main/journalassets/27jun/janked.gif?raw=true)

(????)

so i set out to fix it with some irritating comments

![code](https://github.com/mynameisashllee/flora/blob/main/journalassets/27jun/code.png?raw=true)

after a bunch of hard work, here are my servos... working as intended! i'll probably have to cut the servo horn in half before i start assembling so it doesn't hit the cardboard.

![working](https://github.com/mynameisashllee/flora/blob/main/journalassets/27jun/working.gif?raw=true)

also my crepe paper is here too, with surprisingly good quality. here's a petal model which is how it will look on the flower! (but bigger, probably)

![petal](https://github.com/mynameisashllee/flora/blob/main/journalassets/27jun/petal.png?raw=true)

i spent a lot of time on the floor today. my knees hurt. i stabbed my finger with a pen. back for more next time.

time spent: 4 hours