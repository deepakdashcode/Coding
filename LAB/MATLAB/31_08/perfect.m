function [ans] = perfect(n)
    sod = 0;
    for i = 1: (n / 2 + 1)
        if mod(n, i) == 0
            sod = sod + i;
        end
    end

    if sod == n
        ans = 1;
    else
        ans = 0;
    end

