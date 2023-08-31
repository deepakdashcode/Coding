n = input("Enter n : ");
a = arm(n);
p = perfect(n);
if and(a, p)
    disp("Both perfect and armstrong");
elseif a
    disp("Armstrong");
elseif p
    disp("Perfect");
else
    disp("Neither Armstrong nor perfect")
end
