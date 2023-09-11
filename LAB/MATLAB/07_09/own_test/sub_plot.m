
x = [0: 0.01 :10]
%subplot(1,2,1);
hold on
plot(x,sin(x));
title('sin(x)')
grid on ,axis equal

%subplot(1,2,2);
plot(x,cos(x));
title('cos(x)')
grid on ,axis equal

hold on
plot(x,exp(x));
title('exp(x)')
grid on ,axis equal
