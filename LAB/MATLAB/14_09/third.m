clear all
close all
x = [-10:0.01:10];
y = x.^2;
z = abs(x);
z1 = sin(x);
plot(x,y,'blue')
hold on
plot(x,z,'red')
hold on
plot(x,z1,'green')
xlabel('X')
ylabel('f(x)')
title('Plot of X^2 vs X and |X| vs X')
legend('X^2', '|X|', 'Sin(x)')
