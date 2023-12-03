#pragma once
#include <string>
#include <sdl/SDL.h>
//Roger

struct Hitbox {
	float x, y, width, height;
};

bool checkCollision(const Hitbox& a, const Hitbox& b);

void paintHitbox(Hitbox hitboxA);

class gameObject2D{
public:
	gameObject2D(std::string name, SDL_Texture* Texture, Hitbox box, float x, float y, float sizeX, float sizeY) : name(name), Texture(Texture), box(box), x(x), y(y), sizeX(sizeX), sizeY(sizeY) {}
	void move(float newX, float newY);
	std::string getName();
	float getX();
	float getY();
	float getHitboxX();
	float getHitboxY();
	float getHitboxWidth();
	float getHitboxHeight();
	void setHitbox(float newX, float newY, float newWidth, float newHeight);
	float getSizeX();
	float getSizeY();
	void setSize(float newX, float newY);
	void setTexture(SDL_Texture* newTexture);
	SDL_Texture* getTexture();
private:
	std::string name;
	float x, y, sizeX, sizeY;
	Hitbox box;
	SDL_Texture* Texture;
};