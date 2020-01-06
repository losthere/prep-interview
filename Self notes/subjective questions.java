Subjective Problem 
1)jdk,jre,jvm
jdk = jre + developmnt kits
jre = jvm + library files
jdk - for both developing and running the program
jre - for only running the program
jvm(interpretor) - reads line my line from the .class file.

2)Java does not support operator overloading

3)ant-puzzle
answer: 0.75

=>any 2 ants will collide only if they move towards each other, taking the anti-collision(safe) conditions, there are only 2 possibilities when they wont collide:-

when all move in clockwise direction
when all move in ANTI-clockwise direction
for each ant there are 2 possiblities only either to move clockwise(1) or anticlockwise(0), consider it as a 3 bit(for three ants) binary num with only 2 values 0 or 1,
0 0 0 //safe, as all going in same direction :)
0 0 1
0 1 0
0 1 1
1 0 0
1 0 1
1 1 0
1 1 1 //safe, as all going in same direction :)

so safe conditions will be 2: 111 & 000 ,

whereas total possible conditions are 2x2x2 = 8 and safe conditions =2, so collision conditions are 8-2=6,,

required probability= 6/8

=3/4

=0.75

4)Read page 58 and 59 from cracking the coding interview
