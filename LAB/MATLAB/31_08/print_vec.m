function [] = print_vec(v, ind)
    if ind == length(v)
        disp(v(ind));
    else
        disp(v(ind));
        print_vec(v, ind + 1);
    end

end

