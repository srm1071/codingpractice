clear
echo "enter any file name:"
read filenm
if[ -e $filenm]
then $filenm" file exist" if[ -s $filenm]
then
	echo $filenm" file has size > 0"else
	rm $filenm
	echo $filenm "file is deleted which has size = 0"
fi
else
	echo "file not exist"
fi
