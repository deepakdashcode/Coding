function ans = sum_of_digits(n)
    if n < 9
        ans = n;
    else
        ans = mod(n, 10) + fix(sum_of_digits(n / 10));
    end
end
