This is more or less an esp-idf port of the ubiquitous Arduino library for using MFRC522 readers. It most recently was part of https://github.com/nkolban/esp32-snippets/blob/master/cpp_utils/MFRC522.cpp and I continue to try to remove some of the various dependencies added there.

## History
 * Library to use ARDUINO RFID MODULE KIT 13.56 MHZ WITH TAGS SPI W AND R BY COOQROBOT.
 * Based on code Dr.Leong   ( WWW.B2CQSHOP.COM )
 * Created by Miguel Balboa (circuitito.com), Jan, 2012.
 * Rewritten by Søren Thing Andersen (access.thing.dk), fall of 2013 (Translation to English, refactored, comments, anti collision, cascade levels.)
 * Extended by Tom Clement with functionality to write to sector 0 of UID changeable Mifare cards.
 * Changes made by Neil Kolban, July 2017 to accommodate native ESP32 and ESP32 C++ class wrappers.
 * Moved into a separate esp-idf component library by Ben Klopfenstein May 2022.
