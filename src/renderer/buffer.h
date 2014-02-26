// This file is part of the :(){ :|:& };:'s project
// Licensing information can be found in the LICENSE file
// (C) 2014 :(){ :|:& };:. All rights reserved.
#ifndef __RENDERER_BUFFER_H__
#define __RENDERER_BUFFER_H__

// -----------------------------------------------------------------------------
//
// -----------------------------------------------------------------------------
struct RBTerrain
{
  glm::mat4    local;
  float       *data;
  uint64_t     hash;
};

// -----------------------------------------------------------------------------
//
// -----------------------------------------------------------------------------
struct RBMesh
{

};

// -----------------------------------------------------------------------------
//
// -----------------------------------------------------------------------------
struct RBLight
{

};

// -----------------------------------------------------------------------------
//
// -----------------------------------------------------------------------------
struct RenderBuffer
{
  glm::mat4 camProj;
  glm::mat4 camView;
  std::vector<RBTerrain> terrain;
};

#endif /*__RENDERER_BUFFER_H__*/