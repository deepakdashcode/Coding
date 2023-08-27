function [ans] = fac_sum(n)
    ans = 0;
    for i = 1: n
        ans = ans + (factorial(i) / i);
    end
end


