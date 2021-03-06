
// Version 0.2, 29-05-2019, SM
//   - Divider toegevoegd
//   - JSON_Short_Data toegevoegd (hoeft niet, want SPIFFS det het zelf al !!)
//
// Version 0.1
//   - Version number added

#ifndef Sensor_Timestamp_h
#define Sensor_Timestamp_h  0.2

// ***********************************************************************************
// ***********************************************************************************
class _Sensor_Timestamp : public _Sensor_BaseClass {
  public:
    // ***********************************************************************
    // Creators
    // ***********************************************************************
    _Sensor_Timestamp ( int Divider = 1 ) {
      _Divider = Divider ; 
      Serial.println ( "V" + String ( Sensor_Timestamp_h ) + "   Sensor_Timestamp.h" ) ;
    }

    // ***********************************************************************
    // Get all the sampled data as a JSON string
    // ***********************************************************************
    void Get_JSON_Data () {
//Debug ( "Timestamp" ) ;
      JSON_Data += " \"TimeStamp\":" ;
      JSON_Data +=  millis() / _Divider ;
      JSON_Data += "," ;
    } 
  private :
    int _Divider ;  
};
#endif
