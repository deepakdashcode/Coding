clear all
close all
x = [0:0.1:2*pi];
subplot(2, 2, 1);
plot(x, sin(x));
title('Sin(x)')

subplot(2, 2, 2);
plot(x, cos(x));
title('Cos(x)')

subplot(2, 2, 3);
plot(x, exp(-x));
title('e^(-x)')

subplot(2, 2, 4);
plot(x, x.^3);
title('x^3')
