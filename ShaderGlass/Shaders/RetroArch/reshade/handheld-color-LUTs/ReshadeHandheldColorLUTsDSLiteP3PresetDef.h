/*
ShaderGlass preset reshade/handheld-color-LUTs / DSLite-P3 imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/23046258f7fd02242cc6dd4c08c997a8ddb84935/reshade/handheld-color-LUTs/DSLite-P3.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class ReshadeHandheldColorLUTsDSLiteP3PresetDef : public PresetDef
{
public:
	ReshadeHandheldColorLUTsDSLiteP3PresetDef() : PresetDef{}
	{
		Name = "DSLite-P3";
		Category = "reshade/handheld-color-LUTs";
	}

	virtual void Build() {
         	ShaderDefs.push_back(ReshadeShadersLUTMultiLUTShaderDef()
.Param("filter_linear", "false")
.Param("scale_type_x", "source")
.Param("scale_type_y", "source")
.Param("scale_x", "1.000000")
.Param("scale_y", "1.000000"));
            TextureDefs.push_back(ReshadeShadersLUTHandheldDSLiteP3TextureDef()
.Param("linear", "true")
.Param("name", "SamplerLUT1"));
            TextureDefs.push_back(ReshadeShadersLUTHandheldDSLiteP3ColdTextureDef()
.Param("linear", "true")
.Param("name", "SamplerLUT2"));
	}
};
}
