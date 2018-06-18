i=1
j=1
z=5
while [ $i != 4 ]
do 
  while [ $z != $i ]
  do 
    echo -n "   "
    z=`expr $z - 1`
  done
  z=5
  while [ $j != `expr $i + 1` ]
  do
    if [ $j == $i ]
    then
       t=$j
       while [ $t != 0 ]
       do
         echo -n " $t "
         t=`expr $t - 1`
       done
       j=`expr $j + 1`
    else
       echo -n " $j "
       j=`expr $j + 1`
    fi
  done
  echo " "
  i=`expr $i + 1`
  j=1
done
