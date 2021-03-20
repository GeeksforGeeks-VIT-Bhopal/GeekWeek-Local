//Problem Statement
//Write a function that calculates the corresponding day of the week for any particular date in the past or future.
//For example, for the date 28th August 2020 happens to be Friday. Hence the expected output will be Friday.

#include <string>

string dayOfTheWeek(int day, int month, int year) 
{
    
    string DaysName[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

    int noOfDaysPassedTillMonth[] = {0,   31,  59,  90,  120, 151, 181, 212, 243, 273, 304, 334};

    int totalNoOfDaysPassed = 365 * (year - 1) + noOfDaysPassedTillMonth[month - 1] + day;

    if (month <= 2) 
    {
        year--;
    }

    int leapDaysPassed = (year / 4) - (year / 100) + (year / 400);
    totalNoOfDaysPassed += leapDaysPassed;

    return DaysName[totalNoOfDaysPassed % 7];
}
