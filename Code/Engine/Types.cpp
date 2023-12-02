#include "Types.h"
//Roger

bool checkCollision(const Hitbox& a, const Hitbox& b) {
    return a.x < b.x + b.width && a.x + a.width > b.x && a.y < b.y + b.height && a.y + a.height > b.y;
}



/*
ejemplo de como funciona el game object vercion solo .cpp
class GameObject {
public:
    GameObject(std::string name, float x, float y) : name(name), x(x), y(y){}

    // Métodos para obtener y modificar propiedades
    std::string GetName() { return name; }
    float GetX() { return x; }
    float GetY() { return y; }
    void SetPosition(float newX, float newY) {
        x = newX;
        y = newY;
    }



private:
    std::string name;
    float x;
    float y;
};

int main() {
    GameObject player("Player", 0.0f, 0.0f);

    std::cout << "Nombre del GameObject: " << player.GetName() << std::endl;
    std::cout << "Posición: (" << player.GetX() << ", " << player.GetY() << ")" << std::endl;

    player.SetPosition(2.0f, 3.0f);
    std::cout << "Nueva posición: (" << player.GetX() << ", " << player.GetY() << ")" << std::endl;

    return 0;
} */


