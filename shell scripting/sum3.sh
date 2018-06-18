echo "enter 3 number"
read a b c
d=$a
if [ $b -gt $d ]
then
d=$b
fi
if [ $c -gt $d ]
then
d=$c
fi
echo "longest of $a $b $c is $d" 
