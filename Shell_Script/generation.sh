#!/bin/bash
$1;
$2;
$3;
$4;

mkdir $1;

cd /Users/dossantosalmeidamicael/Documents/Archi\ Linux/ArchiLinux;

#./genTickExec $1 | ./genSensorExec >> $2 2>> $3 | mkdir $4 | mv $2 $3 $4 CECI MARCHE ROMUALD PAS COMME TA METHODE TCHHHIPPPS

./genTickExec $2 | ./genSensorExec >> $1/$3 2>> $1/$4 

#./Users/dossantosalmeidamicael/Documents/Archi\ Linux/ArchiLinux/genTickExec $1;