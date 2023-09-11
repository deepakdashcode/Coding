r = 5;
x = [-5:0.01:5];
y1 = sqrt(r^2 - x.^2)
y2 = -sqrt(r^2 - x.^2)
plot(x,y1,'b',x,y2,'b')
