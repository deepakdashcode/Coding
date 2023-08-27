function [ans] = gcd(a, b)
    if b != 0
        ans = gcd(b, mod(a, b));
    else
        ans = a;
    end
end


