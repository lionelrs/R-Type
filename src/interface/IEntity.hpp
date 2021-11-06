/*
** EPITECH PROJECT, 2021
** B-CPP-501-NCE-5-1-rtype-antonin.fille
** File description:
** IEntity
*/

#ifndef IENTITY_HPP_
#define IENTITY_HPP_

#include <string>
#include <iostream>
#include <memory>
#include "CustomRect.hpp"

class IEntity {
    public:
        IEntity() = default;
        virtual ~IEntity() = default;
        virtual void update() = 0;
        virtual void sendData() = 0;
        virtual bool isAlive() const = 0;
        virtual bool isColliding(const std::shared_ptr<IEntity> &other) const = 0;
        virtual CustomRect getRect() const = 0;

    protected:
    private:
};

#endif /* !IENTITY_HPP_ */
