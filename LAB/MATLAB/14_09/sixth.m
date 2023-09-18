clear all
close all
x = [-1:0.01:1];
y = exp(x.^2);
z = cos(pi*x);
z1 = sin(pi*x);
z2 = log10(x);
plot(x,y,'blue')
hold on
plot(x,z,'red')
hold on
plot(x,z1,'green')
hold on
plot(x,z2,'black')
xlabel('X')
ylabel('f(x)')
title('Plot of X^2 vs X and |X| vs X')
legend('e^(x^2)', 'Cos(pi*x)', 'Sin(pi*x)', 'log(x)')
grid on
