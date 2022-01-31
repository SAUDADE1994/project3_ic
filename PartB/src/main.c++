#include "../include/lang.h"
#include <chrono>

using namespace std::chrono;


//g++ main.c++ ../include/lang.c++ ../include/fcm.c++ -o main
int main(void) {

    auto start = high_resolution_clock::now();
    lang lang_reader("../samples/ref/r_EN.txt", "../samples/text/t_PT.txt", 3, 0.1);
    lang_reader.readFile();

    double total = lang_reader.readTextAnalysis();
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);

    cout << total << endl;
    cout << "Duration Time = " << (double) duration.count() / 1000000 << " seconds" <<endl;


    start = high_resolution_clock::now();
    lang lang_reader_0("../samples/ref/r_EN.txt", "../samples/text/t_EN.txt", 3, 0.1);
    lang_reader_0.readFile();

    total = lang_reader_0.readTextAnalysis();
    stop = high_resolution_clock::now();
    duration = duration_cast<microseconds>(stop - start);

    cout << total << endl;
    cout << "Duration Time = " << (double) duration.count() / 1000000 << " seconds" <<endl;

    return EXIT_SUCCESS;
}