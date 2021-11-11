/*
** EPITECH PROJECT, 2021
** B-CPP-501-NCE-5-1-rtype-antonin.fille
** File description:
** Room
*/

#ifndef ROOM_HPP_
#define ROOM_HPP_

#include <SFML/Graphics.hpp>
#include <boost/asio.hpp>
#include <vector>

#include "Button.hpp"
#include "PlayerCard.hpp"

class Room {
    public:
        Room();
        ~Room();

        void create(const sf::RectangleShape &background);
        void event(const sf::Event &event, const sf::RenderWindow &window, boost::asio::ip::tcp::socket &socket);
        void update(std::vector<std::string> &cmd);
        void draw(sf::RenderWindow &window) const;
        void setRoom(std::vector<std::string> &cmd);

    protected:
    private:

        int _port;
        sf::RectangleShape _background;
        Button _leave;
        Button _ready;
        std::string _id;
        std::vector<PlayerCard *> _players;
};

#endif /* !ROOM_HPP_ */
