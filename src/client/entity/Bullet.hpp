/*
** EPITECH PROJECT, 2021
** B-CPP-501-NCE-5-1-rtype-antonin.fille
** File description:
** Bullet
*/

#ifndef BULLET_HPP_
#define BULLET_HPP_

#include "Entity.hpp"

class Bullet : public Entity {
    public:
        Bullet(const sf::Texture &texture, const sf::Vector2f &pos, const float &speed, const sf::Color &startColor, const sf::Color &endColor);
        ~Bullet();

        void update() override;
        void drawSprite(sf::RenderWindow &window) override;
        void drawParticles(sf::RenderWindow &window) override;

    protected:
    private:
};

#endif /* !BULLET_HPP_ */
