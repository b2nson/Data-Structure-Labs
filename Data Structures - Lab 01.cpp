{\rtf1\ansi\ansicpg1252\cocoartf2580
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fnil\fcharset0 Menlo-Regular;}
{\colortbl;\red255\green255\blue255;\red87\green96\blue106;\red203\green36\blue57;\red7\green33\blue79;
\red91\green40\blue180;\red27\green31\blue35;\red8\green68\blue184;\red218\green76\blue12;}
{\*\expandedcolortbl;;\csgenericrgb\c34118\c37647\c41569;\csgenericrgb\c79608\c14118\c22353;\csgenericrgb\c2745\c12941\c30980;
\csgenericrgb\c35686\c15686\c70588;\csgenericrgb\c10588\c12157\c13725;\csgenericrgb\c3137\c26667\c72157;\csgenericrgb\c85490\c29804\c4706;}
\margl1440\margr1440\vieww28600\viewh15200\viewkind0
\pard\tx560\tx1120\tx1680\tx2240\tx2800\tx3360\tx3920\tx4480\tx5040\tx5600\tx6160\tx6720\pardirnatural\partightenfactor0

\f0\fs24 \cf2 /*\
 * 1 Class State\
In this lab, you are going to define class State consisting of the following details.\
1. Each State has the following data components:\
\'95The name of the state: name\
\'95The population of the state: population\
Each of the aforementioned data components must be hidden from the class user (2 points).\
2. For each of the aforementioned data components, define the setter. The setter of a data component\
assigns the input to that data component. Let the setter function for name and population be\
named setName and setPopulation, respectively. Both setters must be visible to the class\
users (6 points).\
3. All setters must be defined in inlined form (2 points).\
4. For each of the aforementioned data components, define the getter. The getter of a data compo-\
nent returns that data component. Let the getter function for name and population be named\
getName and getPopulation, respectively. Both getters must be visible to the class users. In\
addition, each getter must be constant (6 points).\
5. All getters must be defined in inlined form (2 points).\
6. The definition of class State includes the default constructor that sets\
\'95state name to N/A, and\
\'95state population to 0.\
In addition, avoid inlined form for its definition (3 points).\
7. The class State includes a private helper function size() that returns small, medium, or\
large according to the state\'92s population. The details are as follows:\
\'95If the population is less than 1 million, then it returns small.\
\'95If the population is larger than 1 million but less than 5 million, then it returns medium.\
\'95If the population is larger than 5 million, then it returns large.\
This function must be a constant function. In addition, avoid inlined form for its definition (4\
points).\
8. The class State includes a public function void printSize() that invokes getName()\
along with size() to print the state name and its size in the standard output. printSize() must\
be a constant function. In addition, avoid inlined form for its definition (3 points).\
1\
2 Main function\
Define main function that does the following step by step.\
1. Create an object of class State, called state1 (1 points).\
2. Invoke printSize() function of state1 object (1 points).\
3. Set the name and population for state1 to be California and 40000000, respectively (2\
points).\
4. Invoke printSize() function of state1 object (1 points).\
The output of the program may look like the following:\
N/A: small\
California: large\
 */\
\
\cf3 #include \cf4 <iostream>\
\
\cf3 class \cf5 State \cf6 \{\
\cf3 public:\
\cf5 State\cf6 ();\
\cf3 void \cf5 setName\cf6 (\cf5 std\cf3 ::\cf7 string \cf8 stateName\cf6 );\
\cf3 void \cf5 setPopulation\cf6 (\cf3 int \cf8 statePopulation\cf6 );\
\cf5 std\cf3 ::\cf7 string \cf5 getName\cf6 () \cf3 const\cf6 ;\
\cf3 int \cf5 getPopulation\cf6 () \cf3 const\cf6 ;\
\cf5 std\cf3 ::\cf7 string \cf5 getSize\cf6 () \cf3 const\cf6 ;\
\cf3 void \cf5 Print\cf6 () \cf3 const\cf6 ;\
\
\cf3 private:\
\cf5 std\cf3 ::\cf7 string \cf6 name;\
\cf3 int \cf6 population;\
\cf5 std\cf3 ::\cf7 string \cf6 size;\
\};\
\
\cf5 State\cf3 ::\cf5 State\cf6 () \{\
    name \cf8 = \cf4 "N/A"\cf6 ;\
    population \cf3 = \cf7 0\cf6 ;\
\}\
\
\cf3 void \cf5 State\cf3 ::\cf5 setName\cf6 (\cf5 std\cf3 ::\cf7 string \cf8 stateName\cf6 ) \{\
    name \cf8 = stateName\cf6 ;\
\}\
\
\cf3 void \cf5 State\cf3 ::\cf5 setPopulation\cf6 (\cf3 int \cf8 statePopulation\cf6 ) \{\
    population \cf3 = \cf8 statePopulation\cf6 ;\
\}\
\
\cf5 std\cf3 ::\cf7 string \cf5 State\cf3 ::\cf5 getName\cf6 () \cf3 const \cf6 \{\
    \cf3 return \cf6 name;\
\}\
\
\cf3 int \cf5 State\cf3 ::\cf5 getPopulation\cf6 () \cf3 const \cf6 \{\
    \cf3 return \cf6 population;\
\}\
\
\cf5 std\cf3 ::\cf7 string \cf5 State\cf3 ::\cf5 getSize\cf6 () \cf3 const \cf6 \{\
    \cf3 if \cf6 (population \cf3 < \cf7 1000000\cf6 ) \{\
        \cf3 return \cf4 "small"\cf6 ;\
    \}\
    \cf3 else if \cf6 ((population \cf3 > \cf7 1000000\cf6 ) \cf3 && \cf6 (population \cf3 < \cf7 5000000\cf6 )) \{\
        \cf3 return \cf4 "medium"\cf6 ;\
    \}\
    \cf3 else \cf6 \{\
        \cf3 return \cf4 "large"\cf6 ;\
    \}\
\}\
\cf3 void \cf5 State\cf3 ::\cf5 Print\cf6 () \cf3 const \cf6 \{\
    \cf5 std\cf3 ::\cf6 cout \cf8 << \cf6 name \cf8 << \cf4 " " \cf8 << \cf5 getSize\cf6 () \cf8 << \cf5 std\cf3 ::\cf5 endl\cf6 ;\
\}\
\
\cf3 int \cf5 main\cf6 () \{\
\
\cf5 State \cf7 state1\cf6 ;\
\
\cf7 state1\cf6 .\cf5 Print\cf6 ();\
\
\cf7 state1\cf6 .\cf5 setName\cf6 (\cf4 "California"\cf6 );\
\cf7 state1\cf6 .\cf5 setPopulation\cf6 (\cf7 40000000\cf6 );\
\
\cf7 state1\cf6 .\cf5 Print\cf6 ();\
    \cf3 return \cf7 0\cf6 ;\
\}\
\
}