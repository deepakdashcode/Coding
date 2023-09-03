function p = pow(a, b)
    if b == 0
        p = 1;
    else
        p = a * pow(a, b - 1);
    end
end


