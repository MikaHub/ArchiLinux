#!/bin/bash
$1;
$2;
$3;
$4;

fake='dossantosalmeidamicael';


if [ $USER = $fake ]
then
    mkdir $1;
    
    cd /Users/dossantosalmeidamicael/Documents/Archi\ Linux/ArchiLinux;

    ###AN OTHER WAY TO CHANGE REPOS...
    #./genTickExec $1 | ./genSensorExec >> $2 2>> $3 | mkdir $4 | mv $2 $3 $4 CECI MARCHE ROMUALD PAS COMME TA METHODE TCHHHIPPPS

    ##Other way to filter the file...
    #./generation.sh hello 100 log.txt err.txt | cat hello/log.txt | cut -d "," -f1 -f2 -f3 -f6 > hello/text.txt

    ./genTickExec $2 | ./genSensorExec  >>  Shell_Script/$1/$3 2>>  Shell_Script/$1/$4  

        ##./genTickExec $2 | ./genSensorExec  >>  Shell_Script/$1/$3 2>>  Shell_Script/$1/$4  

else
    echo "Error user"
fi
