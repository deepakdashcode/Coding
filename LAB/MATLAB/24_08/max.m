function [M] = max(a, b, c)
    if a > b
        if a > c
            M = a;
        else
            M = c;
        end
    else
        if b > c
            M = b;
        else
            M = c;
        end
    end
end
