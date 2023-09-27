function M = max_vec(v, ind, cur)
    if ind == length(v)
        M = max(v(ind), cur);
    else
        M = max(v(ind),max_vec(v,ind + 1, cur));
    end
end
