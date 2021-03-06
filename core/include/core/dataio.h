#ifndef _G3_DATAIO_H
#define _G3_DATAIO_H

#include <string>
#include <boost/iostreams/filtering_stream.hpp>

// Function to obtain a filtering istream from a path/URL/someplace
// Knows how to decompress files if compressed (based on filename extension),
// read files from disk, and from network sockets

int g3_istream_from_path(boost::iostreams::filtering_istream &stream,
    const std::string &path, float timeout=-1.0);

#endif

