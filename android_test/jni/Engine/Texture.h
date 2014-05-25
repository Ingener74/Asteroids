/*
 * Texture.h
 *
 *  Created on: 25 ��� 2014 �.
 *      Author: Admin
 */

#ifndef TEXTURE_H_
#define TEXTURE_H_

#include <Engine/Common.h>

namespace ndk_game
{

class Texture
{
public:
    using Ptr = std::shared_ptr<Texture>;

    Texture();
    virtual ~Texture();

    virtual void bind();
};

} /* namespace ndk_game */

#endif /* TEXTURE_H_ */
