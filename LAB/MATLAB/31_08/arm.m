function ans = arm(n)
    d = fix(log10(n)) + 1;
    n1 = n;
    sum = 0;
    while n1
        ld = mod(n1, 10);
        sum = sum + (ld ^ d);
        n1 = fix(n1 / 10);
    end

    if n == sum
        ans = 1;
    else
        ans = 0;
    end
end


