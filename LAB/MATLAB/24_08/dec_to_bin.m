function [dec] = dec_to_bin(bin)
    dec = "";

    while bin
        lb = int2str(mod(bin, 2));
        dec = strcat(lb, dec);
        bin = fix(bin / 2);
    end
end


