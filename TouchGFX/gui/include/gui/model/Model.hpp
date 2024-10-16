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
protected:
    ModelListener* modelListener;
    bool directionButtonState;
};

#endif // MODEL_HPP
