echo "enter the first number\n"
read a
echo "enter the second number\n"
read b
if [ $a -gt $b ]
then
echo "$a is greater"
else
echo "$b is greater"
fi
