
#include <fstream>
#include <string>
#include <array>
#include <vector>


struct Column {
    std::string station; // Unique Column Id
    std::string station_name; // The full name of the station (50 chars)
    std::string date; // Date the data was recorded in YYYYMMDD format
    int preciptiationRate; // Precipitation Rate
    int mdpr; // Daily Average Precipitation Rate
    int prcp; // Daily Precipitation Amount
    int snwd; // Snow depth
    int snow; // Daily snow accumulation
    int tmax; // High Temperature (.1 (C))
    int tmin; // Low Temperature (.1 (C))
    int awind; // Average wind speed
};

Column* findColumn(std::string uuid) {
    
    
    return new Column();
}

void createCleanFile() {
  // Load good records into vector
  // std::vector<Column>* goodColumns = new std::vector<Column>;


  // parse file for good records
  std::string fileName = "AL_Weather_Station.txt";
  std::fstream filestream;
  filestream.open(fileName);

  


  // delete goodColumns;
}


int main() {
  // 1. Use the original AL_WEATHER_STATION_DATA file find all records that have a bad data flag.
  //    Produce a new data file call it Filtered_AL_Weather_Station.txt that omits all records with bad data flags for those three columns.
  createCleanFile();
    return 0;
}


