#include <iostream>
#include <vector>

#include <map>
#include <unordered_map>

// Map: Ordered map // Sorted data structure
// Unordered Map: Hash table // Faster than map

struct CityRecord 
{
    std::string Name;
    uint64_t Population;
    double Latitude, Longitude;
    /*

    CityRecord (std::string city_Name, uint64_t city_Population, double city_Latitude, double city_Longitude) : 
                Name(city_Name), 
                Population(city_Population),
                Latitude (city_Latitude),
                Longitude (city_Longitude) 
                {
                    std::cout << "Constructor " << '\n';
                }

   CityRecord(const CityRecord& cityrecord):
        Name(cityrecord.Name), Population(cityrecord.Population), Longitude(cityrecord.Longitude), Latitude(cityrecord.Latitude)
        {
            std::cout << "copy" << '\n';
        }
        */

};


int main() {

/*
    std::vector<CityRecord> cities;
    cities.reserve(3);
    cities.emplace_back("Melbourne", 500000, 2.4, 9.5);
    cities.emplace_back("Berlin", 500000, 2.4, 9.5);
    cities.emplace_back("Paris", 500000, 2.4, 9.5);

    // how to find the population of Berlin?

    // using vector
    for (const auto& city: cities) 
    {
        if (city.Name == "Berlin")
        {
            city.Population; // population of Berlin
            break;
        }
    }
*/
    // Using map
    std::unordered_map<std::string, CityRecord> cityMap;
    cityMap ["Melbourne"] = CityRecord {"Melbourne", 500000, 2.4, 5.4};
    cityMap ["Berlin"] = CityRecord {"Berlin", 500000, 2.4, 5.4};
    cityMap ["Paris"] = CityRecord {"Paris", 500000, 2.4, 5.4};

    CityRecord& berlinData = cityMap ["Berlin"];

    std::cout << berlinData.Population << '\n';


    return 0;
}