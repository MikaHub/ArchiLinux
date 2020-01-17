#!/bin/bash
#the arguments
echo $1;
echo $2;
echo $3;
echo $4;
#user informations
fake='yateraboubacar';
id > uid.txt
echo "the user id : "
cat uid.txt | cut -d " " -f1
echo "the current user : $USER"
##here we are checking if the users are the sames
if [ $USER = $fake ]
##if the users are the sames, you create a directory and put these two files...
then
  ##create directory with a name's argument
    mkdir $1;
  ##go to the end directory
    cd /Users/yateraboubacar/Documents/ArchiLinux;
    ###AN OTHER WAY TO CHANGE REPOS...
    #./genTickExec $1 | ./genSensorExec >> $2 2>> $3 | mkdir $4 | mv $2 $3 $4 CECI MARCHE ROMUALD PAS COMME TA METHODE TCHHHIPPPS
    ##Other way to filter the file...
    #./generation.sh hello 100 log.txt err.txt | cat hello/log.txt | cut -d "," -f1 -f2 -f3 -f6 > hello/text.txt
    ##run exec files and write the data in files with arguments
    cd | ./genTickExec $2 | ./genSensorExec  >>  Shell_Script/$1/$3 2>>  Shell_Script/$1/$4
    #go to Shell_Script directory
    cd Shell_Script/
    #that's for us(listen directory)
    ls
    ##move files in home directory (user directory)
    mv $1   /Users/$USER/$1
        ##./genTickExec $2 | ./genSensorExec  >>  Shell_Script/$1/$3 2>>  Shell_Script/$1/$4
## condition
else
    echo "Pas le bon"
##end
fi