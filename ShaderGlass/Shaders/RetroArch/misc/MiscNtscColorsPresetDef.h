/*
ShaderGlass preset misc / ntsc-colors imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/23046258f7fd02242cc6dd4c08c997a8ddb84935/misc/ntsc-colors.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class MiscNtscColorsPresetDef : public PresetDef
{
public:
	MiscNtscColorsPresetDef() : PresetDef{}
	{
		Name = "ntsc-colors";
		Category = "misc";
	}

	virtual void Build() {
         	ShaderDefs.push_back(MiscShadersNtscColorsShaderDef()
.Param("scale_type", "source"));
	}
};
}
