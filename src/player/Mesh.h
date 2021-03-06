/*
 * Copyright (c) 2019, Intel Corporation
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * * Redistributions of source code must retain the above copyright notice, this
 *   list of conditions and the following disclaimer.
 * * Redistributions in binary form must reproduce the above copyright notice,
 *   this list of conditions and the following disclaimer in the documentation
 *   and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.

 *
 */

//!
//! \file     Mesh.h
//! \brief    Defines class for Mesh.
//!
#ifndef _MESH_H_
#define _MESH_H_

#include "Common.h"
#include "RenderBackend.h"

VCD_NS_BEGIN

class Mesh
{
public:
    Mesh();
    virtual ~Mesh();
    virtual RenderStatus Create() = 0;
    virtual RenderStatus Destroy() = 0;
    virtual RenderStatus Bind(RenderBackend *renderBackend, uint32_t vertexAttrib, uint32_t texCoordAttrib) = 0;
    uint32_t GetVertexNum();
    uint32_t GetIndexNum();
    float *GetVertices();
    float *GetTexCoords();
    uint32_t *GetIndices();

protected:
    float *m_vertices;
    float *m_texCoords;
    uint32_t *m_indices;
    uint32_t m_vertexNum;
    uint32_t m_indexNum;
};

VCD_NS_END
#endif /* _MESH_H_ */
