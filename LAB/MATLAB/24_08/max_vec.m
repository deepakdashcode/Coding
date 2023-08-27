function [M] = max_vec(vec)
    M = vec(1);
    for i = vec
        if i > M
            M = i;
        end
    end
end


