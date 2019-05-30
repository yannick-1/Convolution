
#include "../JuceLibraryCode/JuceHeader.h"
#include "DSPConvolution.h"

//==============================================================================
AudioProcessor* JUCE_CALLTYPE createPluginFilter()
{
    return new DSPTutorialAudioProcessor();
}
