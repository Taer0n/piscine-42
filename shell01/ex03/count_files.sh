find . -type f -o -type d | wc -l | rev | cut -f 1 -d " " | rev
