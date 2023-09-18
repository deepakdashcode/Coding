clear all
x = [3 9 27];
y = [10 8 6];
z = [4 4 4];
t = [1 2 3];
hold on
plot(t, x, 'blue', t, y, 'red', t, z, 'green')
title('Plot of Distance over Time')
xlabel('Time in s')
ylabel('Distance in m')
legend('Trial 1', 'Trial 2', 'Trial 3')
legend('Location', 'NorthWest')

