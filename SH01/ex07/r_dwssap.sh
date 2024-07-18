#!/bin/sh
cat /etc/passwd |awk -n "${FT_LINE1},${FT_LINE}p" | awk 'NR%2==1' | cut -d : -f 1 | rev | sort -r | tr '\n' | sed 's/.$/./' | sed 's/,/, /g' | tr -d '\n'
