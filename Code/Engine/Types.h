#pragma once
#include <string>
//Roger

struct Hitbox {
	float x, y, width, height;
};

bool checkCollision(const Hitbox& a, const Hitbox& b);

class gameObject2D{
public:
	gameObject2D(std::string name, Hitbox box, float x, float y) : name(name), box(box), x(x), y(y) {}
	void move(float newX, float newY);
	std::string getName();
	float getX();
	float getY();

private:
	std::string name;
	float x, y;
	Hitbox box;
};