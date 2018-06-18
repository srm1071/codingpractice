i=0
j=0
while [ $i != 5 ]
do
  while [ $j != 0 ]
  do
   echo -n " $j "
   j=`expr $j - 1`
  done
  echo " $j "
  i=`expr $i + 1`
  j=$i
done
