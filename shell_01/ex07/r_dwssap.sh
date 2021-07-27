cat /etc/passwd | awk -F ":" '{
        if (NR % 2 == 0) 
            print $1 | "rev"
        }' | sort -ru | awk '{
            if (NR >= start && NR < end)
                printf("%s, ", $1);
        }' start=$FT_LINE1 end=$FT_LINE2 | awk '{gsub(", $", "."); print $0}' | tr -d "\n"
