cat /etc/passwd | sed '^/#/d' | cut -f 1 -d ':' | rev | sort -r | awk 'NR >= ENVIRON["FT_LINE1"] && NR <= ENVIRON["FT_LINE2"]' | tr '\n' ',' | sed -e 's/,$/./' | tr -d '\n'
