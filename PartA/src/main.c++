#include "../include/fcm.h"

int main(void) {

    fcm fcm_reader(3, 0.2);
    fcm_reader.fcm_readfile("../example.txt");

    fcm_reader.printMap();

    fcm_reader.getEntropy();

    return EXIT_SUCCESS;
}