function ans = prime(n)
    ans = 1;
    for i = 2:n/2 + 1
        if(mod(n, i) == 0)
        ans = 0;
        break;
        end
    end

end
