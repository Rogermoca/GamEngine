#pragma once
#include <string>
//Roger

struct Hitbox {
	float x, y, width, height;
};

bool checkCollision(const Hitbox& a, const Hitbox& b);

void paintHitbox();

class gameObject2D{
public:
	gameObject2D(std::string name, Hitbox box, float x, float y) : name(name), box(box), x(x), y(y) {}
	void move(float newX, float newY);
	std::string getName();
	float getX();
	float getY();
	float getHitboxX();
	float getHitboxY();
	float getHitboxWidth();
	float getHitboxHeight();
	void setHitbox(float newX, float newY, float newWidth, float newHeight);

private:
	std::string name;
	float x, y;
	Hitbox box;
};