#include "Types.h"
#include <sdl/SDL.h>
#include <string>
//Roger

bool checkCollision(const Hitbox& a, const Hitbox& b) {
    return a.x < b.x + b.width && a.x + a.width > b.x && a.y < b.y + b.height && a.y + a.height > b.y;
}
void paintHitbox(Hitbox hitboxA) {
    SDL_Rect rect = { hitboxA.x, hitboxA.y, hitboxA.width, hitboxA.height };
    SDL_Renderer* renderer;
    SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255); // Color rojo
    SDL_RenderDrawRect(renderer, &rect);
    SDL_DestroyRenderer(renderer);
}

void gameObject2D::move(float newX, float newY){
    x = newX;
    y = newY;

    box.x = x;
    box.y = y;
}
float gameObject2D::getX() { return x; }
float gameObject2D::getY() { return y; }
float gameObject2D::getSizeX() { return sizeX; }
float gameObject2D::getSizeY() { return sizeY; }
float gameObject2D::getHitboxX() { return box.x; }
float gameObject2D::getHitboxY() { return box.y; }
float gameObject2D::getHitboxWidth() { return box.width; }
float gameObject2D::getHitboxHeight() { return box.height; }
std::string gameObject2D::getName(){
    return name;
}
void gameObject2D::setHitbox(float newX, float newY, float newWidth, float newHeight) {
    box.x = newX;
    box.y = newY;
    box.width = newWidth;
    box.height = newHeight;
}
void gameObject2D::setSize(float newX, float newY) {
    sizeX = newX;
    sizeY = newY;
}

SDL_Texture* gameObject2D::getTexture(){ return Texture; }

void gameObject2D::setTexture(SDL_Texture* newTexture){
    Texture = newTexture;
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


