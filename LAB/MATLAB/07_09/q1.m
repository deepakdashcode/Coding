clear all
close all
x = [0:0.01:5];
y = exp(-1.5 * x).*sin(10 * x);
plot(x,y)
title('Plot of exp(-1.5 * x).*sin(10 * x)')
xlabel('x')
ylabel('f(x)')
legend('exp(-1.5 * x).*sin(10 * x)')

