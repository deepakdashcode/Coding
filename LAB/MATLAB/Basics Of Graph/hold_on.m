x = [0:0.01:5];
xlabel('x')
ylabel('Sin(x*pi)')
plot(x, sin(x*pi))
hold on
plot(x, cos(x*pi), 'r--');
legend('Sin', 'Cos', 'Location','northwest')
