/*
ShaderGlass preset crt / yeetron imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/23046258f7fd02242cc6dd4c08c997a8ddb84935/crt/yeetron.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class CrtYeetronPresetDef : public PresetDef
{
public:
	CrtYeetronPresetDef() : PresetDef{}
	{
		Name = "yeetron";
		Category = "crt";
	}

	virtual void Build() {
         	ShaderDefs.push_back(CrtShadersYeetronShaderDef()
.Param("filter_linear", "false")
.Param("scale_type", "viewport"));
	}
};
}
