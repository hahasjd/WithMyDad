#include <iostream>

using namespace std;

float input_layer[2];
float hidden_layer[2][2];
float output_layer[1];
float weights_layer_1[2][2];
float weights_layer_2[2][2];
float weights_output[2];

void init(void)
{
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            weights_layer_1[i][j] = 0.5;
            weights_layer_2[i][j] = 0.5;
        }
        weights_output[i] = 0.5;
    }
}

int main()
{
    init();

    for(int i = 0; i < 2; i++)
    {
        cout << "Hello !{"<<i<<"}" << endl << flush;
    }
    return 0;
}
