function ans = count_dig(n, ans)
    if n < 10
        ans = 1;
    else
        ans = 1 + count_dig(fix(n/10), ans);
    end
end
