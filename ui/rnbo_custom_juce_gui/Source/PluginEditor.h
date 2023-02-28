/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
#include "PluginProcessor.h"

//==============================================================================
/**
*/
class Rnbo_custom_juce_guiAudioProcessorEditor  : public juce::AudioProcessorEditor
{
public:
    Rnbo_custom_juce_guiAudioProcessorEditor (Rnbo_custom_juce_guiAudioProcessor&);
    ~Rnbo_custom_juce_guiAudioProcessorEditor() override;

    //==============================================================================
    void paint (juce::Graphics&) override;
    void resized() override;

private:
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    Rnbo_custom_juce_guiAudioProcessor& audioProcessor;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (Rnbo_custom_juce_guiAudioProcessorEditor)
};
