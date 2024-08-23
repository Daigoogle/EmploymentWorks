//	t@C¼FTextureRegister.h
//	Tv		 FeNX`ÌÇÝÝAi[
//	ì¬Ò	 FÉ¡åå
//	XVL^	 F2024/02/18	14:59	ì¬	
//¸¶¸¶¸¶¸¶¸¶¸¶¸¶¸¶¸¶¸¶¸¶¸¶¸¶¸¶¸¶¸¶¸¶¸¶¸¶¸¶¸¶¸¶¸¶¸¶¸¶²

// =-=-= CN[hK[h =-=-=
#ifndef _____TEXTURE_REGISTER_H_____
#define _____TEXTURE_REGISTER_H_____

// =-=-= CN[h =-=-=
#include "Texture.h"
#include <map>
#include <string>
#include "SingletonsMng.hxx"

/// @brief eNX`ÌÇ
/// @brief ¥£¥£¥£ VOgÅ· ¥£¥£¥£
class TextureRegister final :public Singleton<TextureRegister>
{
	friend Singleton<TextureRegister>;
public:
	Texture* LoadTexture(const std::string& path);

private:
	TextureRegister();
	~TextureRegister();

	std::map<std::string, Texture*> m_Textures;
};

#endif // !_____TEXTURE_REGISTER_H_____