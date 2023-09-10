clear all
close all
x = [0:0.01:5];

t1 = exp(-1.5 * x);
t2 = sin(10 * x);

for i = 1: length(x)
    y(i) = (t1(i)*t2(i));

end
disp(y);
plot(x,y)
