echo -n "Enter the no. : "
read fact
f=1
t=0
while [ $fact -ne $t ]
do
	t=` expr $t + 1 `
	f=` expr $f \* $t `
done
echo -n "Factorial is : $f"
