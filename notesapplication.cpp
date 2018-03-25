#include "notesapplication.h"

NotesApplication::NotesApplication(int& argc, char** argv)
    : QApplication(argc, argv)
{
    mObjectReader.SetConsumer(mObjectRenderer);
    mObjectRenderer.SetConsumer(mMainWindow);

    if (argc == 0)
    {
        return;
    }

    QString fileName = argv[0];
    std::ifstream file(fileName);
    mObjectReader.Read(file);

    mMainWindow.show();
}
