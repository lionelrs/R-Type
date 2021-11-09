/*
** EPITECH PROJECT, 2021
** B-CPP-501-NCE-5-1-rtype-antonin.fille
** File description:
** RoomCard
*/

#ifndef ROOMCARD_HPP_
#define ROOMCARD_HPP_

#include <SFML/Graphics.hpp>
#include <boost/asio.hpp>

#include "Button.hpp"

class RoomCard {
    public:
        RoomCard();
        ~RoomCard();

        void create(const sf::Vector2f &pos, const sf::Vector2f &size, const std::string &text, const int &users = 0, const double &thickness = 1.0, const sf::Vector2f &factors = {1, 1});
        void draw(sf::RenderWindow &window) const;
        void event(const sf::Event &event, const sf::RenderWindow &window, boost::asio::ip::tcp::socket &socket);
        sf::Vector2f getPosition() const;
        sf::Vector2f getSize() const;
        void incrementPosition();
        void decrementPosition();
        void cleanHover();
        std::string getId() const;

    protected:
    private:
        void join(const sf::Event &event, const sf::RenderWindow &window, boost::asio::ip::tcp::socket &socket);
        void hover(const sf::Event &event, const sf::RenderWindow &window);

        sf::RectangleShape _background;
        sf::Color _outline;
        sf::Text _title;
        sf::Text _playerCount;
        std::string _id;
        sf::Font _font;
        Button _delete;
        double _thickness;
};

#endif /* !ROOMCARD_HPP_ */
