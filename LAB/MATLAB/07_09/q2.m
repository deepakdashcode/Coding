clear all
close all
x = [0:0.01:5];
y = exp(-2 * x).*sin(10 * x);
plot(x,y,'r--')
title('Plot of exp(-2 * x).*sin(10 * x))')
xlabel('x')
ylabel('f(x)')
legend('exp(-2 * x).*sin(10 * x)')
