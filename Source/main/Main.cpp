/*
  ==============================================================================

    This file was auto-generated by the Introjucer!

    It contains the basic startup code for a Juce application.

  ==============================================================================
*/

#include "../JuceLibraryCode/JuceHeader.h"

#include "iOSMainWindow.h"

//==============================================================================
class OpenGLES2ExamplesApplication  : public JUCEApplication
{
public:
    //==============================================================================
    OpenGLES2ExamplesApplication()
    {
    }

    ~OpenGLES2ExamplesApplication()
    {
    }

    //==============================================================================
    void initialise (const String& commandLine)
    {
        // Do your application's initialisation code here..
        mainWindow = new iOSMainWindow();
    }

    void shutdown()
    {
        // Do your application's shutdown code here..
        mainWindow = 0;
    }

    //==============================================================================
    void systemRequestedQuit()
    {
        quit();
    }

    //==============================================================================
    const String getApplicationName()
    {
        return "OpenGL ES 2 Examples";
    }

    const String getApplicationVersion()
    {
        return ProjectInfo::versionString;
    }

    bool moreThanOneInstanceAllowed()
    {
        return true;
    }

    void anotherInstanceStarted (const String& commandLine)
    {
        
    }

private:
    ScopedPointer <iOSMainWindow> mainWindow;
};

//==============================================================================
// This macro generates the main() routine that starts the app.
START_JUCE_APPLICATION(OpenGLES2ExamplesApplication)