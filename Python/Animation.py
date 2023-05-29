from turtle import *
import colorsys
speed('fastest')
bgcolor('black')
width (2)
h=0.0
for i in range(250):
    col=colorsys.hsv_to_rgb(h,1,1)
    color(col)
    forward(i*2)
    right(121)
    h+=0.005
    
done()