# journaling my journeying (33h total)

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

## 5 July 
now that my circuit was ready, it was time to begin. today was the day i would finish it all. (or the base, anyway.) 

first off, i decided to actually cut the servo horns. using the power of wire cutters and sheer brute strength, i actually managed to do it all myself! 

![horn](https://github.com/mynameisashllee/flora/blob/main/journalassets/5jul/horn.png?raw=true)

my hands were very, very red afterwards. i definitely do not recommend this step and if you ever find one sided servo horns you should just use those instead.

![hands](https://github.com/mynameisashllee/flora/blob/main/journalassets/5jul/hands.png?raw=true)

next, i scoured through my house for spare cardboard, and we had some nice thick boxes! the only problem was that there were folds at the places where i wanted to cut out the circle, but i figured i'd double layer the cardboard to make it sturdier.

![cardboard](https://github.com/mynameisashllee/flora/blob/main/journalassets/5jul/cardboard.png?raw=true)

then i laid out the servos in the intended circlular orientation to figure out the correct way to open and close the petals. i made this high quality diagram to show the directions of the servos when the flower is 'open' for reference.

![diagram](https://github.com/mynameisashllee/flora/blob/main/journalassets/5jul/diagram.jpg?raw=true)

i then took to my collar stays with a heated screwdriver (the sad part was that it's a magnetic screwdriver with different heads and i think i ruined the magnetism by heating it) and poked some holes in them to tie the string. 

![collarstays](https://github.com/mynameisashllee/flora/blob/main/journalassets/5jul/collarstays.png?raw=true)

assembly time!! i taped the servos in positions and tied two collar stays to a servo with the fishing line. 

![circlecardboard](https://github.com/mynameisashllee/flora/blob/main/journalassets/5jul/circlecardboard.png?raw=true)

https://github.com/user-attachments/assets/06558860-657e-401c-917a-8a24dc6fcc48

when i powered up the servos i was like, woah! this is so cool! it works! 

https://github.com/user-attachments/assets/97546c10-0c78-4bb9-bc74-a5d542ef6f94

then i went oh no, because only half the collar stays were being pulled open. after analysing the front and back i realised that the servos were in a position where they were closer to one of the collar stays, so there wasn't an even distribution of torque between the two and one of the collar stays just closed up more.

once i fixed the orientation, i realised that my cardboard circle was really small and the servos would just knock into each other so i elevated two of them with a hot glued contraption of spare cardboard.

![fixed](https://github.com/mynameisashllee/flora/blob/main/journalassets/5jul/fixed.png?raw=true)
![elevated](https://github.com/mynameisashllee/flora/blob/main/journalassets/5jul/elevated.png?raw=true)

and voila!! it worked.

![working](https://github.com/mynameisashllee/flora/blob/main/journalassets/5jul/working.png?raw=true)

then i got to work securing everything properly with hot glue and my circuit kind of came apart. suddenly... once i rewired everything the servos JUST STOPPED WORKING. they heated up a lot and just didnt move at all even though power was going through the circuit. at this point it was 12am, and i was crashing out and just let it go. good night.

(8 hours)

## 7 July
so after consulting with the slack, i got really terrified that my servos were just totally fried. after checking my wiring properly i realised that i had just wired my servo driver into the wrong GPIO pin on my arduino. i felt like a fool. on the bright side, it works now! properly! but no day comes without its challenges, and today's challenge was that i tied some of the fishing lines too tight so one of the servos just popped off the base and some of the lines snapped. but once i fix this, it'll definitely work!

## 22 July
my first entry after getting back from undercity! i retied my lines and hot glued AND taped my servos properly to really ensure they stayed in place (because the cardboard stack i put the servo on was not stable enough. but now it is!).

and then on to my favourite (crafty) part... the petals! here's my flower with one attached.
![working](https://github.com/mynameisashllee/flora/blob/main/journalassets/22jul/onepetal.png?raw=true)

and here's all 8 of the moving petals! in action!! i'm so excited honestly.



https://github.com/user-attachments/assets/9ec3462b-fdc6-45b9-ad6f-49686b10f35d



i think my next problem is like... worrying about how i'm gonna find a stand and. put it together. maybe i'll find some old lamp like someone suggested and stick the components on the back where they can't be seen or something.

(2 hours)

## 27 July
okay! i've officially decided on this old bottle. 

https://github.com/mynameisashllee/flora/blob/main/journalassets/27jul/bottle.png?raw=true

i guess this project is gonna be eco friendly because i've been using a bunch of recycled cardboard too. i was kind of apprehensive about this being my stem because it was kind of thick but i realised it can hide all my components inside. which is pretty much a win.

so first i taped up my servo wires, and cut up some styrofoam (which makes a really irritating noise) because i had to make a sturdy structure for the whole flower to sit on. (i also nixed the sideways design because. no materials. no time. it'll be upright now)

https://github.com/mynameisashllee/flora/blob/main/journalassets/27jul/styrofoam.png?raw=true

https://github.com/mynameisashllee/flora/blob/main/journalassets/27jul/servotape.png?raw=true

here's the final structure, which i glued onto the lid of the bottle. i also used my messed up soldering iron tip to poke a hole into the lid for the servo wires to go through. and here it is semi-assembled. what a beauty.

https://github.com/mynameisashllee/flora/blob/main/journalassets/27jul/lid.png?raw=true

https://github.com/mynameisashllee/flora/blob/main/journalassets/27jul/semiassembled.png?raw=true

i also decided to take a chance on my soldering skills and solder the battery wires because they were really unstable connections when i used the jumpers. and it worked! i love soldering. so right now the 4.7v batteries power the servos and an external source (power bank/laptop) powers the arduino.

https://github.com/mynameisashllee/flora/blob/main/journalassets/27jul/solder.png?raw=true

also, i stuck all the other circuit components on cardboard to fit inside the bottle neatly. so i taped up and hot glued my jumper wires to make this slightly cryptid-looking thing.

https://github.com/mynameisashllee/flora/blob/main/journalassets/27jul/wiring.png?raw=true

of course, the distance sensor has to peek out, so i cut (melted) out a hole for it.

https://github.com/mynameisashllee/flora/blob/main/journalassets/27jul/eyes.png?raw=true

with the distance sensor 'eyes' and the arduino cable 'tail' it kind of looks like a woodland creature with a flower hat, which is pretty cute honestly. and i also wrapped the whole thing in masking tape so it'd be easy to paint! (it still took very long, but it was less painful, i guess). and here's my final product for the day.

https://github.com/mynameisashllee/flora/blob/main/journalassets/27jul/final.png?raw=true

after this, i started freaking out because the thing suddenly wasn't working! but it turned out to just be the batteries running out of juice. which is easily solvable because they're rechargeable (: yay
(4 hours)

## 29 July
the final stretch! i spent a while painting the whole stem (and arduino cable) green, tested the flower again with charged batteries to make sure it worked, and began cutting, like, 10 more big petals.

https://github.com/mynameisashllee/flora/blob/main/journalassets/29jul/cutting.png?raw=true

i also made a mini rose structure to fill up the middle space.

https://github.com/mynameisashllee/flora/blob/main/journalassets/29jul/rose.png?raw=true

here's the whole thing!

https://github.com/mynameisashllee/flora/blob/main/journalassets/29jul/full.png?raw=true

and here's it open and closed from the top view. 

https://github.com/mynameisashllee/flora/blob/main/journalassets/29jul/close.png?raw=true

https://github.com/mynameisashllee/flora/blob/main/journalassets/29jul/open.png?raw=true

it's so pretty. i'm also so happy it's finally done. BYE BYE! like and subscribe.

(2 hours)
