expr=$(echo "$FT_NBR1 + $FT_NBR2")

expr=$(echo "$expr" | tr \'\\\\\"\?\! '01234')
expr=$(echo "$expr" | tr mrdoc '01234')

expr="ibase=5; obase=23; $expr"
result=$(echo "$expr" | bc)
output=$(echo "$result" | tr '0123456789ABC' 'gtaio luSnemf')
echo "$output"
