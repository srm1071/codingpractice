FILE="/path/to/some/file"
if [[ -r $FILE && -w $FILE]]
then
#do stuff
else
#file is either not readable or writeable or both
fi
