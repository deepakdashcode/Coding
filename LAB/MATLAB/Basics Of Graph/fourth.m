x = [-10:0.01:10];
y = sin(x);
g = cos(x);
plot(x, y, 'b',x,g, 'g')
legend('Sin(x)', 'Cos(x)')
