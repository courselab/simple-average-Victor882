/* main.c - Calculate the average of three numbers.

   Copyright (c) <year>, <author(s)-name>  <email(s)>
   
   This file is part of <project>
   
   <project> is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include <stdio.h>

float average (float n1, float n2, float n3)
{
  return (n1+n2+n3)/3;
}

int main()
{
 float n1, n2, n3;
 float result;
  
 n1 = 6.38;
 n2 = 8.77;
 n3 = 9.75;
  
 result = average (n1, n2, n3);

 printf ("%1.2f\n" , result);
  
 return 0;
}