// version 4, dec 2019, LoRa download commands added, average of multiple SDS reads per cycle
//Lora packets
//  PORT      BYTE    Description
//  2         0       LSBs of update_interval_secs
//  2         1       MSBs of update_interval_secs
//  3         0       dust_delay_secs (between 2 and 50)
//  4         x       reset measurement sequence (forces GPS-read after 4 packets)
//  5         0       dust_interval_delay_secs (between 1 and 9)
//  5         1       dust_num_meas

// version 5, may 2020, for Buitenbuurt
// image too large, some cleanups and code enhancements.

#define SW_VERSION (5)
