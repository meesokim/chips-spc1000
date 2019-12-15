#pragma once
/*
    #version:2# (machine generated, don't edit!)

    Generated by sokol-shdc (https://github.com/floooh/sokol-tools)

    Overview:

        Shader program 'display':
            Get shader desc: display_shader_desc()
            Vertex shader: display_vs
                Attribute slots:
                    ATTR_display_vs_in_pos = 0
                    ATTR_display_vs_in_uv = 1
            Fragment shader: display_fs
                Image 'tex':
                    Type: SG_IMAGETYPE_2D
                    Bind slot: SLOT_tex = 0

        Shader program 'upscale':
            Get shader desc: upscale_shader_desc()
            Vertex shader: upscale_vs
                Attribute slots:
                    ATTR_upscale_vs_in_pos = 0
                    ATTR_upscale_vs_in_uv = 1
            Fragment shader: upscale_fs
                Image 'tex':
                    Type: SG_IMAGETYPE_2D
                    Bind slot: SLOT_tex = 0


    Shader descriptor structs:

        sg_shader display = sg_make_shader(display_shader_desc());
        sg_shader upscale = sg_make_shader(upscale_shader_desc());

    Vertex attribute locations for vertex shader 'upscale_vs':

        sg_pipeline pip = sg_make_pipeline(&(sg_pipeline_desc){
            .layout = {
                .attrs = {
                    [ATTR_upscale_vs_in_pos] = { ... },
                    [ATTR_upscale_vs_in_uv] = { ... },
                },
            },
            ...});

    Vertex attribute locations for vertex shader 'display_vs':

        sg_pipeline pip = sg_make_pipeline(&(sg_pipeline_desc){
            .layout = {
                .attrs = {
                    [ATTR_display_vs_in_pos] = { ... },
                    [ATTR_display_vs_in_uv] = { ... },
                },
            },
            ...});

    Image bind slots, use as index in sg_bindings.vs_images[] or .fs_images[]

        SLOT_tex = 0;

*/
#include <stdint.h>
#include <stdbool.h>
#if !defined(SOKOL_SHDC_ALIGN)
  #if defined(_MSC_VER)
    #define SOKOL_SHDC_ALIGN(a) __declspec(align(a))
  #else
    #define SOKOL_SHDC_ALIGN(a) __attribute__((aligned(a)))
  #endif
#endif
#define ATTR_upscale_vs_in_pos (0)
#define ATTR_upscale_vs_in_uv (1)
#define ATTR_display_vs_in_pos (0)
#define ATTR_display_vs_in_uv (1)
#define SLOT_tex (0)
/*
    #version 100
    
    attribute vec2 in_pos;
    varying vec2 uv;
    attribute vec2 in_uv;
    
    void main()
    {
        gl_Position = vec4((in_pos * 2.0) - vec2(1.0), 0.5, 1.0);
        uv = in_uv;
    }
    
*/
static const char upscale_vs_source_glsl100[173] = {
    0x23,0x76,0x65,0x72,0x73,0x69,0x6f,0x6e,0x20,0x31,0x30,0x30,0x0a,0x0a,0x61,0x74,
    0x74,0x72,0x69,0x62,0x75,0x74,0x65,0x20,0x76,0x65,0x63,0x32,0x20,0x69,0x6e,0x5f,
    0x70,0x6f,0x73,0x3b,0x0a,0x76,0x61,0x72,0x79,0x69,0x6e,0x67,0x20,0x76,0x65,0x63,
    0x32,0x20,0x75,0x76,0x3b,0x0a,0x61,0x74,0x74,0x72,0x69,0x62,0x75,0x74,0x65,0x20,
    0x76,0x65,0x63,0x32,0x20,0x69,0x6e,0x5f,0x75,0x76,0x3b,0x0a,0x0a,0x76,0x6f,0x69,
    0x64,0x20,0x6d,0x61,0x69,0x6e,0x28,0x29,0x0a,0x7b,0x0a,0x20,0x20,0x20,0x20,0x67,
    0x6c,0x5f,0x50,0x6f,0x73,0x69,0x74,0x69,0x6f,0x6e,0x20,0x3d,0x20,0x76,0x65,0x63,
    0x34,0x28,0x28,0x69,0x6e,0x5f,0x70,0x6f,0x73,0x20,0x2a,0x20,0x32,0x2e,0x30,0x29,
    0x20,0x2d,0x20,0x76,0x65,0x63,0x32,0x28,0x31,0x2e,0x30,0x29,0x2c,0x20,0x30,0x2e,
    0x35,0x2c,0x20,0x31,0x2e,0x30,0x29,0x3b,0x0a,0x20,0x20,0x20,0x20,0x75,0x76,0x20,
    0x3d,0x20,0x69,0x6e,0x5f,0x75,0x76,0x3b,0x0a,0x7d,0x0a,0x0a,0x00,
};
/*
    #version 100
    precision mediump float;
    precision highp int;
    
    uniform highp sampler2D tex;
    
    varying highp vec2 uv;
    
    void main()
    {
        gl_FragData[0] = texture2D(tex, uv);
    }
    
*/
static const char upscale_fs_source_glsl100[173] = {
    0x23,0x76,0x65,0x72,0x73,0x69,0x6f,0x6e,0x20,0x31,0x30,0x30,0x0a,0x70,0x72,0x65,
    0x63,0x69,0x73,0x69,0x6f,0x6e,0x20,0x6d,0x65,0x64,0x69,0x75,0x6d,0x70,0x20,0x66,
    0x6c,0x6f,0x61,0x74,0x3b,0x0a,0x70,0x72,0x65,0x63,0x69,0x73,0x69,0x6f,0x6e,0x20,
    0x68,0x69,0x67,0x68,0x70,0x20,0x69,0x6e,0x74,0x3b,0x0a,0x0a,0x75,0x6e,0x69,0x66,
    0x6f,0x72,0x6d,0x20,0x68,0x69,0x67,0x68,0x70,0x20,0x73,0x61,0x6d,0x70,0x6c,0x65,
    0x72,0x32,0x44,0x20,0x74,0x65,0x78,0x3b,0x0a,0x0a,0x76,0x61,0x72,0x79,0x69,0x6e,
    0x67,0x20,0x68,0x69,0x67,0x68,0x70,0x20,0x76,0x65,0x63,0x32,0x20,0x75,0x76,0x3b,
    0x0a,0x0a,0x76,0x6f,0x69,0x64,0x20,0x6d,0x61,0x69,0x6e,0x28,0x29,0x0a,0x7b,0x0a,
    0x20,0x20,0x20,0x20,0x67,0x6c,0x5f,0x46,0x72,0x61,0x67,0x44,0x61,0x74,0x61,0x5b,
    0x30,0x5d,0x20,0x3d,0x20,0x74,0x65,0x78,0x74,0x75,0x72,0x65,0x32,0x44,0x28,0x74,
    0x65,0x78,0x2c,0x20,0x75,0x76,0x29,0x3b,0x0a,0x7d,0x0a,0x0a,0x00,
};
/*
    #version 100
    
    attribute vec2 in_pos;
    varying vec2 uv;
    attribute vec2 in_uv;
    
    void main()
    {
        gl_Position = vec4((in_pos * 2.0) - vec2(1.0), 0.5, 1.0);
        uv = in_uv;
    }
    
*/
static const char display_vs_source_glsl100[173] = {
    0x23,0x76,0x65,0x72,0x73,0x69,0x6f,0x6e,0x20,0x31,0x30,0x30,0x0a,0x0a,0x61,0x74,
    0x74,0x72,0x69,0x62,0x75,0x74,0x65,0x20,0x76,0x65,0x63,0x32,0x20,0x69,0x6e,0x5f,
    0x70,0x6f,0x73,0x3b,0x0a,0x76,0x61,0x72,0x79,0x69,0x6e,0x67,0x20,0x76,0x65,0x63,
    0x32,0x20,0x75,0x76,0x3b,0x0a,0x61,0x74,0x74,0x72,0x69,0x62,0x75,0x74,0x65,0x20,
    0x76,0x65,0x63,0x32,0x20,0x69,0x6e,0x5f,0x75,0x76,0x3b,0x0a,0x0a,0x76,0x6f,0x69,
    0x64,0x20,0x6d,0x61,0x69,0x6e,0x28,0x29,0x0a,0x7b,0x0a,0x20,0x20,0x20,0x20,0x67,
    0x6c,0x5f,0x50,0x6f,0x73,0x69,0x74,0x69,0x6f,0x6e,0x20,0x3d,0x20,0x76,0x65,0x63,
    0x34,0x28,0x28,0x69,0x6e,0x5f,0x70,0x6f,0x73,0x20,0x2a,0x20,0x32,0x2e,0x30,0x29,
    0x20,0x2d,0x20,0x76,0x65,0x63,0x32,0x28,0x31,0x2e,0x30,0x29,0x2c,0x20,0x30,0x2e,
    0x35,0x2c,0x20,0x31,0x2e,0x30,0x29,0x3b,0x0a,0x20,0x20,0x20,0x20,0x75,0x76,0x20,
    0x3d,0x20,0x69,0x6e,0x5f,0x75,0x76,0x3b,0x0a,0x7d,0x0a,0x0a,0x00,
};
/*
    #version 100
    precision mediump float;
    precision highp int;
    
    uniform highp sampler2D tex;
    
    varying highp vec2 uv;
    highp float fmin;
    
    highp vec3 calc_mask()
    {
        return vec3(fmin + ((1.0 - fmin) * (mod(gl_FragCoord.y, 0.800000011920928955078125) * 2.0)));
    }
    
    void main()
    {
        fmin = 0.699999988079071044921875;
        gl_FragData[0] = vec4(texture2D(tex, uv).xyz * calc_mask(), 2.0);
    }
    
*/
static const char display_fs_source_glsl100[385] = {
    0x23,0x76,0x65,0x72,0x73,0x69,0x6f,0x6e,0x20,0x31,0x30,0x30,0x0a,0x70,0x72,0x65,
    0x63,0x69,0x73,0x69,0x6f,0x6e,0x20,0x6d,0x65,0x64,0x69,0x75,0x6d,0x70,0x20,0x66,
    0x6c,0x6f,0x61,0x74,0x3b,0x0a,0x70,0x72,0x65,0x63,0x69,0x73,0x69,0x6f,0x6e,0x20,
    0x68,0x69,0x67,0x68,0x70,0x20,0x69,0x6e,0x74,0x3b,0x0a,0x0a,0x75,0x6e,0x69,0x66,
    0x6f,0x72,0x6d,0x20,0x68,0x69,0x67,0x68,0x70,0x20,0x73,0x61,0x6d,0x70,0x6c,0x65,
    0x72,0x32,0x44,0x20,0x74,0x65,0x78,0x3b,0x0a,0x0a,0x76,0x61,0x72,0x79,0x69,0x6e,
    0x67,0x20,0x68,0x69,0x67,0x68,0x70,0x20,0x76,0x65,0x63,0x32,0x20,0x75,0x76,0x3b,
    0x0a,0x68,0x69,0x67,0x68,0x70,0x20,0x66,0x6c,0x6f,0x61,0x74,0x20,0x66,0x6d,0x69,
    0x6e,0x3b,0x0a,0x0a,0x68,0x69,0x67,0x68,0x70,0x20,0x76,0x65,0x63,0x33,0x20,0x63,
    0x61,0x6c,0x63,0x5f,0x6d,0x61,0x73,0x6b,0x28,0x29,0x0a,0x7b,0x0a,0x20,0x20,0x20,
    0x20,0x72,0x65,0x74,0x75,0x72,0x6e,0x20,0x76,0x65,0x63,0x33,0x28,0x66,0x6d,0x69,
    0x6e,0x20,0x2b,0x20,0x28,0x28,0x31,0x2e,0x30,0x20,0x2d,0x20,0x66,0x6d,0x69,0x6e,
    0x29,0x20,0x2a,0x20,0x28,0x6d,0x6f,0x64,0x28,0x67,0x6c,0x5f,0x46,0x72,0x61,0x67,
    0x43,0x6f,0x6f,0x72,0x64,0x2e,0x79,0x2c,0x20,0x30,0x2e,0x38,0x30,0x30,0x30,0x30,
    0x30,0x30,0x31,0x31,0x39,0x32,0x30,0x39,0x32,0x38,0x39,0x35,0x35,0x30,0x37,0x38,
    0x31,0x32,0x35,0x29,0x20,0x2a,0x20,0x32,0x2e,0x30,0x29,0x29,0x29,0x3b,0x0a,0x7d,
    0x0a,0x0a,0x76,0x6f,0x69,0x64,0x20,0x6d,0x61,0x69,0x6e,0x28,0x29,0x0a,0x7b,0x0a,
    0x20,0x20,0x20,0x20,0x66,0x6d,0x69,0x6e,0x20,0x3d,0x20,0x30,0x2e,0x36,0x39,0x39,
    0x39,0x39,0x39,0x39,0x38,0x38,0x30,0x37,0x39,0x30,0x37,0x31,0x30,0x34,0x34,0x39,
    0x32,0x31,0x38,0x37,0x35,0x3b,0x0a,0x20,0x20,0x20,0x20,0x67,0x6c,0x5f,0x46,0x72,
    0x61,0x67,0x44,0x61,0x74,0x61,0x5b,0x30,0x5d,0x20,0x3d,0x20,0x76,0x65,0x63,0x34,
    0x28,0x74,0x65,0x78,0x74,0x75,0x72,0x65,0x32,0x44,0x28,0x74,0x65,0x78,0x2c,0x20,
    0x75,0x76,0x29,0x2e,0x78,0x79,0x7a,0x20,0x2a,0x20,0x63,0x61,0x6c,0x63,0x5f,0x6d,
    0x61,0x73,0x6b,0x28,0x29,0x2c,0x20,0x32,0x2e,0x30,0x29,0x3b,0x0a,0x7d,0x0a,0x0a,
    0x00,
};
static const sg_shader_desc display_shader_desc_glsl100 = {
  0, /* _start_canary */
  { /*attrs*/{"in_pos","TEXCOORD",0},{"in_uv","TEXCOORD",1},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0}, },
  { /* vs */
    display_vs_source_glsl100, /* source */
    0,  /* bytecode */
    0,  /* bytecode_size */
    "main", /* entry */
    { /* uniform blocks */
      {
        0, /* size */
        { /* uniforms */{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0}, },
      },
      {
        0, /* size */
        { /* uniforms */{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0}, },
      },
      {
        0, /* size */
        { /* uniforms */{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0}, },
      },
      {
        0, /* size */
        { /* uniforms */{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0}, },
      },
    },
    { /* images */ {0,_SG_IMAGETYPE_DEFAULT},{0,_SG_IMAGETYPE_DEFAULT},{0,_SG_IMAGETYPE_DEFAULT},{0,_SG_IMAGETYPE_DEFAULT},{0,_SG_IMAGETYPE_DEFAULT},{0,_SG_IMAGETYPE_DEFAULT},{0,_SG_IMAGETYPE_DEFAULT},{0,_SG_IMAGETYPE_DEFAULT},{0,_SG_IMAGETYPE_DEFAULT},{0,_SG_IMAGETYPE_DEFAULT},{0,_SG_IMAGETYPE_DEFAULT},{0,_SG_IMAGETYPE_DEFAULT}, },
  },
  { /* fs */
    display_fs_source_glsl100, /* source */
    0,  /* bytecode */
    0,  /* bytecode_size */
    "main", /* entry */
    { /* uniform blocks */
      {
        0, /* size */
        { /* uniforms */{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0}, },
      },
      {
        0, /* size */
        { /* uniforms */{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0}, },
      },
      {
        0, /* size */
        { /* uniforms */{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0}, },
      },
      {
        0, /* size */
        { /* uniforms */{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0}, },
      },
    },
    { /* images */ {"tex",SG_IMAGETYPE_2D},{0,_SG_IMAGETYPE_DEFAULT},{0,_SG_IMAGETYPE_DEFAULT},{0,_SG_IMAGETYPE_DEFAULT},{0,_SG_IMAGETYPE_DEFAULT},{0,_SG_IMAGETYPE_DEFAULT},{0,_SG_IMAGETYPE_DEFAULT},{0,_SG_IMAGETYPE_DEFAULT},{0,_SG_IMAGETYPE_DEFAULT},{0,_SG_IMAGETYPE_DEFAULT},{0,_SG_IMAGETYPE_DEFAULT},{0,_SG_IMAGETYPE_DEFAULT}, },
  },
  "display_shader", /* label */
  0, /* _end_canary */
};
static const sg_shader_desc upscale_shader_desc_glsl100 = {
  0, /* _start_canary */
  { /*attrs*/{"in_pos","TEXCOORD",0},{"in_uv","TEXCOORD",1},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0}, },
  { /* vs */
    upscale_vs_source_glsl100, /* source */
    0,  /* bytecode */
    0,  /* bytecode_size */
    "main", /* entry */
    { /* uniform blocks */
      {
        0, /* size */
        { /* uniforms */{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0}, },
      },
      {
        0, /* size */
        { /* uniforms */{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0}, },
      },
      {
        0, /* size */
        { /* uniforms */{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0}, },
      },
      {
        0, /* size */
        { /* uniforms */{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0}, },
      },
    },
    { /* images */ {0,_SG_IMAGETYPE_DEFAULT},{0,_SG_IMAGETYPE_DEFAULT},{0,_SG_IMAGETYPE_DEFAULT},{0,_SG_IMAGETYPE_DEFAULT},{0,_SG_IMAGETYPE_DEFAULT},{0,_SG_IMAGETYPE_DEFAULT},{0,_SG_IMAGETYPE_DEFAULT},{0,_SG_IMAGETYPE_DEFAULT},{0,_SG_IMAGETYPE_DEFAULT},{0,_SG_IMAGETYPE_DEFAULT},{0,_SG_IMAGETYPE_DEFAULT},{0,_SG_IMAGETYPE_DEFAULT}, },
  },
  { /* fs */
    upscale_fs_source_glsl100, /* source */
    0,  /* bytecode */
    0,  /* bytecode_size */
    "main", /* entry */
    { /* uniform blocks */
      {
        0, /* size */
        { /* uniforms */{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0}, },
      },
      {
        0, /* size */
        { /* uniforms */{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0}, },
      },
      {
        0, /* size */
        { /* uniforms */{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0}, },
      },
      {
        0, /* size */
        { /* uniforms */{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0},{0,SG_UNIFORMTYPE_INVALID,0}, },
      },
    },
    { /* images */ {"tex",SG_IMAGETYPE_2D},{0,_SG_IMAGETYPE_DEFAULT},{0,_SG_IMAGETYPE_DEFAULT},{0,_SG_IMAGETYPE_DEFAULT},{0,_SG_IMAGETYPE_DEFAULT},{0,_SG_IMAGETYPE_DEFAULT},{0,_SG_IMAGETYPE_DEFAULT},{0,_SG_IMAGETYPE_DEFAULT},{0,_SG_IMAGETYPE_DEFAULT},{0,_SG_IMAGETYPE_DEFAULT},{0,_SG_IMAGETYPE_DEFAULT},{0,_SG_IMAGETYPE_DEFAULT}, },
  },
  "upscale_shader", /* label */
  0, /* _end_canary */
};
#if !defined(SOKOL_GFX_INCLUDED)
  #error "Please include sokol_gfx.h before shaders.glsl.h"
#endif
static inline const sg_shader_desc* display_shader_desc(void) {
    if (sg_query_backend() == SG_BACKEND_GLES2) {
        return &display_shader_desc_glsl100;
    }
    return 0; /* can't happen */
}
static inline const sg_shader_desc* upscale_shader_desc(void) {
    if (sg_query_backend() == SG_BACKEND_GLES2) {
        return &upscale_shader_desc_glsl100;
    }
    return 0; /* can't happen */
}
