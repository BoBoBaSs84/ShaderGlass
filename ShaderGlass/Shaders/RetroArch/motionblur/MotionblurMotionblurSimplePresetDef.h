/*
ShaderGlass preset motionblur / motionblur-simple imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/23046258f7fd02242cc6dd4c08c997a8ddb84935/motionblur/motionblur-simple.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class MotionblurMotionblurSimplePresetDef : public PresetDef
{
public:
	MotionblurMotionblurSimplePresetDef() : PresetDef{}
	{
		Name = "motionblur-simple";
		Category = "motionblur";
	}

	virtual void Build() {
         	ShaderDefs.push_back(MotionblurShadersMotionblurSimpleShaderDef()
.Param("filter_linear", "false")
.Param("scale_type", "source"));
	}
};
}
