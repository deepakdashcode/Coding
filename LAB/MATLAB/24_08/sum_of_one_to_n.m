function a = sum_of_one_to_n(n, ans)
    if n == 1
        a = 1;
    else
        a = n + sum_of_one_to_n(n - 1, ans);
    end
end
