#include<iostream>
#include<iomanip>
#include<fstream>
#include<sstream>

using namespace std;


struct Restaurant
    {
            string name;
            int food_quality;
            int cleanliness;
            int wait_time;
            double overall;
    };

double getOverallRating(Restaurant restaurant)
    {
        if(restaurant.food_quality < 0 || restaurant.food_quality > 10 || restaurant.cleanliness < 0 || restaurant.cleanliness > 10 || restaurant.wait_time < 0 || restaurant.wait_time > 5)
        {
            return -1;
        }
        else
        {
        double overallRating = (0.5 * restaurant.food_quality) + (0.3 * restaurant.cleanliness) + (0.2 * restaurant.wait_time);
        return overallRating;
        }
    }

int readRestaurantDetails(string filename, Restaurant restaurants[], const int MAX_SIZE)
{
    int numberOfRestaurants;

    ifstream inFile(filename);
    if(!inFile.is_open())
    {
        return -1; 
    }

    string foodQuality, cleanliness, waitTime;
    int idx = 0;

    for(int i = 0; getline(inFile, restaurants[i].name, '~') && getline(inFile, foodQuality, '~') && getline(inFile, cleanliness, '~') && getline(inFile, waitTime) && i < MAX_SIZE; i++)
    {
        if(!waitTime.empty() && (waitTime.back() == '\r' || waitTime.back() == '\n'))
        {
            waitTime.pop_back();
        }
        

        restaurants[i].food_quality = stoi(foodQuality);
        restaurants[i].cleanliness = stoi(cleanliness);
        restaurants[i].wait_time = stoi(waitTime);

        if(restaurants[i].food_quality < 0 || restaurants[i].food_quality > 10 || restaurants[i].cleanliness < 0 || restaurants[i].cleanliness > 10 || restaurants[i].wait_time < 0 || restaurants[i].wait_time > 5)
        {
            i--;
        }

        idx = i;
    }

    return numberOfRestaurants;
    numberOfRestaurants = idx;
}

int getBest(Restaurant restaurants[], int arr_size, string metric)
{
    if(metric == "Food Quality")
    {
        int bestFoodQuality = 0;

        for(int i = 0; i < arr_size; i++)
        {
        if(restaurants[i].food_quality > bestFoodQuality)
        {
            bestFoodQuality = restaurants[i].food_quality;
        }
        }

        return bestFoodQuality;
    }
    else if (metric == "Cleanliness")
    {
        int bestCleanliness = 0;

        for(int i = 0; i < arr_size; i++)
        {
        if(restaurants[i].cleanliness > bestCleanliness)
        {
            bestCleanliness = restaurants[i].cleanliness;
        }
        }
        
        return bestCleanliness;
    }
    else if(metric == "Wait Time")
    {
        int bestWaitTime = 0;

        for(int i = 0; i < arr_size; i++)
        {
        if(restaurants[i].wait_time > bestWaitTime)
        {
            bestWaitTime = restaurants[i].wait_time;
        }
        }
        
        return bestWaitTime;
    }
    else if(metric == "Overall")
    {
        double bestOverall = 0;

        for(int i = 0; i < arr_size; i++)
        {

            double overall = getOverallRating(restaurants[i]);

            if(overall > bestOverall)
            {
                bestOverall = overall;
            }
        }
        
        return bestOverall;
    }
    else
    {
        return -1;
    }
}