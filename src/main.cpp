#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <string>
#include <sstream>
#include <random>
#include <boost/math/constants/constants.hpp>
#include <cmath>
#include <chrono>
#include <list>
#include <QtCore>
#include <QtWidgets>
#include <QtCharts>
#include "chart.h"

using namespace std;

#define COUNT_OF_GAMMA 1000


int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    QMainWindow window;
    MyWidget *my_wgt = new MyWidget(); 
    my_wgt->genChart();
    window.setCentralWidget(my_wgt);
    window.show();
    return app.exec();
}





