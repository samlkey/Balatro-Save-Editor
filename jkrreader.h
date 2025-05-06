#ifndef JKRREADER_H
#define JKRREADER_H

#include <string>

/*
 * JkrReader
 *
 * @brief Reads and decompresses .jkr files.
 *
 * @property std::string filePath - The path to the .jkr file to load.
 * @property const std::string decompressedData - The decompressed data from the .jkr file.
 *
 * @method void load() - Loads and decompresses the .jkr file data.
 * @method const std::string& getDecompressedData() - Returns the decompressed data.
 */

class JkrReader
{
public:
    JkrReader();
    bool load(std::string filePath);
    std::string getDecompressedData() const;

private:
    std::string filePath;
    const std::string decompressedData;
};

#endif // JKRREADER_H
