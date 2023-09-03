function [M, m] = min_max(v)
    M = v(1);
    m = v(1);
    for i = v
        if i > M
            M = i;
        end
        if i < m
            m = i;
        end
    end
end
