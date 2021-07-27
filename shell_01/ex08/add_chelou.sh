#!/bin/sh
printf "%s  %s" $FT_NBR1 $FT_NBR2 | tr "mrdoc" "01234" |awk '{
            gsub("\047", "0"); 
            gsub("\\\\", "1"); 
            gsub("\042", "2"); 
            gsub("\\077", "3"); 
            gsub("\041", "4");
            printf("obase=13; ibase=5; %s + %s\n", $1, $2)
    }' | bc | tr "0123456789ABC" "gtaio luSnemf"
