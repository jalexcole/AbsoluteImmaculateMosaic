
#include <fstream>
#include <string>
#include <array>
#include <vector>


struct Column {
    std::string station; // Unique Column Id
    std::string station_name; // The full name of the station (50 chars)
    std::string date; // Date the data was recorded in YYYYMMDD format
    int mdpr; // Daily Average Precipitation Rate
    int prcp; // Daily Precipitation Amount
    int snwd; // Snow depth
};

Column* findColumn(std::string uuid) {
    
    
    return new Column();
}



int main() {
    return 0;
}


