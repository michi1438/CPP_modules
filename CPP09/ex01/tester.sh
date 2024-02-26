#! /bin/bash

make re

echo; echo "FAILLING TEST"; echo

echo ">> ./RPN"
./RPN
echo ">> ./RPN \"\""
./RPN ""
echo ">> ./RPN \"\" \"\""
./RPN "" ""
.echo ">> /RPN tnoeh tnohu"
./RPN tnoeh tnohu 
echo ">> ./RPN \"noethau ntouh nothu ntohue ntoueh \""
./RPN "noethau ntouh nothu ntohue ntoueh "
echo ">> ./RPN \"noettoueh  { { { { .\""
./RPN "noettoueh  { { { { ."

echo; echo "SUBJECT TEST"; echo

echo ">> ./RPN \"8 9 * 9 - 9 - 9 - 4 - 1 +\""
./RPN "8 9 * 9 - 9 - 9 - 4 - 1 +"
echo ">> ./RPN \"7 7 * 7 -\""
./RPN "7 7 * 7 -"
echo ">> ./RPN \"1 2 * 2 / 2 * 2 4 - +\""
./RPN "1 2 * 2 / 2 * 2 4 - +"
echo ">> ./RPN \"(1 + 1)\""
./RPN "(1 + 1)"


echo; echo "OTHER TEST"; echo
echo "./RPN \"8 9 * 9 - 9 - 9 - 4 - 1 + 5 - 3 + 5 5 - + 1 2 * 2 / 2 * 2 4 - + +\""
./RPN "8 9 * 9 - 9 - 9 - 4 - 1 + 5 - 3 + 5 5 - + 1 2 * 2 / 2 * 2 4 - + +"
echo "./RPN \"+ 5 5\""
./RPN "+ 5 5"
echo "./RPN \"5 + 5\""
./RPN "5 + 5"
echo "./RPN \"+ + 5\""
./RPN "+ + 5"

echo; echo "DONE"; echo;
