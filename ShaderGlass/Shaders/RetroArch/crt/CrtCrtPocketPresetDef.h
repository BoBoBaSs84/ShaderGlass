/*
ShaderGlass preset crt / crt-pocket imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/23046258f7fd02242cc6dd4c08c997a8ddb84935/crt/crt-pocket.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class CrtCrtPocketPresetDef : public PresetDef
{
public:
	CrtCrtPocketPresetDef() : PresetDef{}
	{
		Name = "crt-pocket";
		Category = "crt";
	}

	virtual void Build() {
         	ShaderDefs.push_back(CrtShadersCrtPocketShaderDef()
.Param("scale_type", "viewport"));
	}
};
}
