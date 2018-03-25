#include <QApplication>
#include "mainwindow.h"
#include "objectreader.h"
#include "objectrenderer.h"

class NotesApplication : public QApplication
{
public:
    NotesApplication(int& argc, char** argv);

private:
    MainWindow mMainWindow;
    ObjectReader mObjectReader;
    ObjectRenderer mObjectRenderer;
};
