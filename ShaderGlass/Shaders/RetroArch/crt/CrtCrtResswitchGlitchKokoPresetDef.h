/*
ShaderGlass preset crt / crt-resswitch-glitch-koko imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/23046258f7fd02242cc6dd4c08c997a8ddb84935/crt/crt-resswitch-glitch-koko.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class CrtCrtResswitchGlitchKokoPresetDef : public PresetDef
{
public:
	CrtCrtResswitchGlitchKokoPresetDef() : PresetDef{}
	{
		Name = "crt-resswitch-glitch-koko";
		Category = "crt";
	}

	virtual void Build() {
         	ShaderDefs.push_back(CrtShadersCrtResswitchGlitchKokoShaderDef()
.Param("scale_type", "source")
.Param("wrap_mode", "clamp_to_border"));
            OverrideParam("scale_0", (float)1.000000);
	}
};
}
