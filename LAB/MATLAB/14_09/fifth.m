clear all
close all
x = [-10:0.01:10];
y = x.^2;
z = abs(x);
z1 = sin(x);
z2 = log10(x);
subplot(2,2,1)
plot(x,y,'blue')
title('Plot of X^2 vs X')
subplot(2,2,2)
plot(x,z,'red')
title('Plot of |X| vs X')
subplot(2,2,3)
plot(x,z1,'green')
title('Plot of Sin(x) vs X')
subplot(2,2,4)
plot(x,z2,'black')
title('Plot of log(X) vs X')
xlabel('X')
ylabel('f(x)')


