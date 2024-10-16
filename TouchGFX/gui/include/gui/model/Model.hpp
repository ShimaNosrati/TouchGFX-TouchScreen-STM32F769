#ifndef MODEL_HPP
#define MODEL_HPP

class ModelListener;

class Model
{
public:
    Model();

    void bind(ModelListener* listener)
    {
        modelListener = listener;
    }

    void tick();

    void saveDirectionButton(bool buttonState);
    bool getDirectionButton();

    void saveSpeedValue(int speedValue);
    int getSpeedValue();

    void saveInVoltageValue(int voltageValue);
    int getInVoltageValue();
protected:
    ModelListener* modelListener;
    bool directionButtonState;
    int motorSpeedValue;
    int inputVoltageValue;
};

#endif // MODEL_HPP
