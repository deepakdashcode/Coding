function ans = fib(n)
    if n == 1
        ans = 0;
    elseif n == 2
        ans = 1;
    else
        ans = fib(n - 1) + fib(n - 2);
    end
end



