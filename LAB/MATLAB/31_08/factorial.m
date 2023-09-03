function ans = factorial(n)
    if or(n == 0, n == 1)
        ans = 1;
    else
        ans = n * factorial(n - 1);
       end
   end



