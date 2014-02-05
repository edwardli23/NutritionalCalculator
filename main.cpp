//
//  main.cpp
//  Assignment_3
//
//  Created by Edward Li on 1/29/14.
//  Copyright (c) 2014 __MyCompanyName__. All rights reserved.
//

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

// main client --------------------------------------------------------
int main()
{
   // food #1 constants
   const string FOOD_1_NAME = "avocado";
   const  int FOOD_1_CALORIES_P100G = 160;  // in calories
   const  double FOOD_1_SOL_FIBER_P100G = 1.75;   // in grams
   const  double FOOD_1_DIETARY_FIBER_P100G = 7; // in grams
   const  double FOOD_1_SUGARS_P100G = 0; // in grams
   
   // food #2 constants
   const  string FOOD_2_NAME = "tomato";
   const  int FOOD_2_CALORIES_P100G = 18;  // in calories
   const  double FOOD_2_SOL_FIBER_P100G = .12;   // in grams
   const  double FOOD_2_DIETARY_FIBER_P100G = 1; // in grams
   const  double FOOD_2_SUGARS_P100G = 2; // in grams
   
   // food #3 constants
   const  string FOOD_3_NAME = "buffalo mozzarella";
   const  int FOOD_3_CALORIES_P100G = 282;  // in calories
   const  double FOOD_3_SOL_FIBER_P100G = 0.;   // in grams
   const  double FOOD_3_DIETARY_FIBER_P100G = 0; // in grams
   const  double FOOD_3_SUGARS_P100G = 0; // in grams
   
   // food #4 constants
   const string FOOD_4_NAME = "lettuce";
   const  int FOOD_4_CALORIES_P100G = 15; // in calories
   const  double FOOD_4_SOL_FIBER_P100G = 0.1; // in grams
   const  double FOOD_4_DIETARY_FIBER_P100G = 1; // in grams
   const  double FOOD_4_SUGARS_P100G = 1; // in grams
   
   const  string INDENT = "   ";
   
   string recipeName, userInputStr;
   int userInputInt;
   double totalSolFiber, totalCals, totalDietFiber, totalSugars;
   
   // initialize accumulator variables
   totalSolFiber  = 0.;
   totalCals =  0;
   totalDietFiber = 0;
   totalSugars = 0;
   
   // print menu
   cout << "---------- List of Possible Ingredients ---------" << endl;
   cout << INDENT << "Food #1: " << FOOD_1_NAME << endl;
   cout << INDENT << "Food #2: " << FOOD_2_NAME << endl;
   cout << INDENT << "Food #3: " << FOOD_3_NAME << endl;
   cout << INDENT << "Food #4: " << FOOD_4_NAME << endl << endl;
   
   // name of recipe
   cout << "What are you calling this recipe? ";
   getline(cin, recipeName);
   
   // food #1 ---------------------------------------------------------
   cout << "How many grams of " << FOOD_1_NAME << "? ";
   getline(cin, userInputStr);
   istringstream(userInputStr) >> userInputInt;
   
   // error message
   if(userInputInt < 0 || userInputInt > 1000)
   {
      cout << "You have entered an invalid number" << endl;
      exit(1);
   }
   
   // update accumulators
   totalCals += userInputInt * (FOOD_1_CALORIES_P100G/100.);
   totalSolFiber  += userInputInt * (FOOD_1_SOL_FIBER_P100G/100.);
   totalDietFiber += userInputInt * (FOOD_1_DIETARY_FIBER_P100G/100.);
   totalSugars += userInputInt * (FOOD_1_SUGARS_P100G/100.);
   
   // food #2 ---------------------------------------------------------
   cout << "How many grams of " << FOOD_2_NAME << "? ";
   getline(cin, userInputStr);
   istringstream(userInputStr) >> userInputInt;
   
   // error message
   if(userInputInt < 0 || userInputInt > 1000)
   {
      cout << "You have entered an invalid number" << endl;
      exit(1);
   }
   
   // update accumulators
   totalCals += userInputInt * (FOOD_2_CALORIES_P100G/100.);
   totalSolFiber  += userInputInt * (FOOD_2_SOL_FIBER_P100G/100.);
   totalDietFiber += userInputInt * (FOOD_2_DIETARY_FIBER_P100G/100.);
   totalSugars += userInputInt * (FOOD_2_SUGARS_P100G/100.);
   
   // food #3 ---------------------------------------------------------
   cout << "How many grams of " << FOOD_3_NAME << "? ";
   getline(cin, userInputStr);
   istringstream(userInputStr) >> userInputInt;
   
   // error message
   if(userInputInt < 0 || userInputInt > 1000)
   {
      cout << "You have entered an invalid number" << endl;
      exit(1);
   }
   
   // update accumulators
   totalCals += userInputInt * (FOOD_3_CALORIES_P100G/100.);
   totalSolFiber  += userInputInt * (FOOD_3_SOL_FIBER_P100G/100.);
   totalDietFiber += userInputInt * (FOOD_3_DIETARY_FIBER_P100G/100.);
   totalSugars += userInputInt * (FOOD_3_SUGARS_P100G/100.);
   
   // food #4 ---------------------------------------------------------
   cout << "How many grams of " << FOOD_4_NAME << "? ";
   getline(cin, userInputStr);
   istringstream(userInputStr) >> userInputInt;
   
   // error message
   if(userInputInt < 0 || userInputInt > 1000)
   {
      cout << "You have entered an invalid number" << endl;
      exit(1);
   }
   
   // update accumulators
   totalCals += userInputInt * (FOOD_4_CALORIES_P100G/100.);
   totalSolFiber  += userInputInt * (FOOD_4_SOL_FIBER_P100G/100.);
   totalDietFiber += userInputInt * (FOOD_4_DIETARY_FIBER_P100G/100.);
   totalSugars += userInputInt * (FOOD_4_SUGARS_P100G/100.);
   
   cout << "How many people does " << recipeName << " serve?" << endl;
   getline(cin,userInputStr);
   istringstream(userInputStr) >> userInputInt;
   
   if(userInputInt < 1 || userInputInt > 10)
   {
      cout << "You have entered an invalid number" << endl;
      exit(1);
   }
   
   totalCals = totalCals / userInputInt;
   totalSolFiber = totalSolFiber / userInputInt;
   totalDietFiber = totalDietFiber / userInputInt;
   totalSugars = totalSugars / userInputInt;
   
   // report results --------------------------------------------------
   cout << "\nNutrition for " << recipeName << "------------" << endl; 
   cout << INDENT << "Calories: " << totalCals << endl;
   cout << INDENT << "Soluble Fiber: " << totalSolFiber << endl;
   cout << INDENT << "Dietary Fiber: " << totalDietFiber << endl;
   cout << INDENT << "Sugars: " << totalSugars << endl << endl;
   
   return 0;
}

/*----------------------------------------------------------------------
 Run 1:
 ---------- List of Possible Ingredients ---------
 Food #1: avocado
 Food #2: tomato
 Food #3: buffalo mozzarella
 Food #4: lettuce
 
 What are you calling this recipe? ed
 How many grams of avocado? 100
 How many grams of tomato? 100
 How many grams of buffalo mozzarella? 100
 How many grams of lettuce? 100
 How many people does ed serve?
 8
 
 Nutrition for ed------------
 Calories: 59.375
 Soluble Fiber: 0.24625
 Dietary Fiber: 1.125
 Sugars: 0.375
 
Run 2: 
 ---------- List of Possible Ingredients ---------
 Food #1: avocado
 Food #2: tomato
 Food #3: buffalo mozzarella
 Food #4: lettuce
 
 What are you calling this recipe? Fun
 How many grams of avocado? 200
 How many grams of tomato? 100
 How many grams of buffalo mozzarella? 300
 How many grams of lettuce? 200
 How many people does Fun serve?
 10
 
 Nutrition for Fun------------
 Calories: 121.4
 Soluble Fiber: 0.382
 Dietary Fiber: 1.7
 Sugars: 0.4
 
 Run 3:
 ---------- List of Possible Ingredients ---------
 Food #1: avocado
 Food #2: tomato
 Food #3: buffalo mozzarella
 Food #4: lettuce
 
 What are you calling this recipe? yum
 How many grams of avocado? 500
 How many grams of tomato? 200
 How many grams of buffalo mozzarella? 600
 How many grams of lettuce? 200
 How many people does yum serve?
 15
 You have entered an invalid number
 
 Run 4:
 ---------- List of Possible Ingredients ---------
 Food #1: avocado
 Food #2: tomato
 Food #3: buffalo mozzarella
 Food #4: lettuce
 
 What are you calling this recipe? party
 How many grams of avocado? 700
 How many grams of tomato? 500
 How many grams of buffalo mozzarella? 300
 How many grams of lettuce? 200
 How many people does party serve?
 7
 
 Nutrition for party------------
 Calories: 298
 Soluble Fiber: 1.86429
 Dietary Fiber: 8
 Sugars: 1.71429

 Run 5:
 ---------- List of Possible Ingredients ---------
 Food #1: avocado
 Food #2: tomato
 Food #3: buffalo mozzarella
 Food #4: lettuce
 
 What are you calling this recipe? foothill special
 How many grams of avocado? 600
 How many grams of tomato? 400
 How many grams of buffalo mozzarella? 200
 How many grams of lettuce? 800
 How many people does foothill special serve?
 8
 
 Nutrition for foothill special------------
 Calories: 214.5
 Soluble Fiber: 1.4725
 Dietary Fiber: 6.75
 Sugars: 2
 

 -----------------------------------------------------------------------*/
