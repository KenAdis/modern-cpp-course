wc -l data.dat
grep -E 'dolor|dalor' data.dat | wc -l
wc -w data.dat
grep -o -E 'mol[a-zA-Z]*' data.dat | wc -l
