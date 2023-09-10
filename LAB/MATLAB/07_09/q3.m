clear all
close all
x = [0:0.01:5];
y1 = exp(-2 * x).*sin(10 * x);
y2 = exp(-1.5 * x).*sin(10 * x);
plot(x,y1, 'red', x, y2, 'blue')
title('Plot of exp(-2 * x)*sin(10 * x)) and exp(-1.5 * x).*sin(10 * x)')
xlabel('x')
ylabel('y')
legend('exp(-2 * x).*sin(10 * x)', 'exp(-1.5 * x).*sin(10 * x)')

