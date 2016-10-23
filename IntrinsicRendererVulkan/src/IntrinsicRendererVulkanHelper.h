// Intrinsic
// Copyright (c) 2016 Benjamin Glatzel
//
// This program is free software : you can redistribute it and / or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program. If not, see <http://www.gnu.org/licenses/>.

#pragma once

namespace Intrinsic
{
namespace Renderer
{
namespace Vulkan
{
namespace Helper
{
_INTR_INLINE void initResource(TBuiltInResource& p_Resource)
{
  p_Resource.maxLights = 32;
  p_Resource.maxClipPlanes = 6;
  p_Resource.maxTextureUnits = 32;
  p_Resource.maxTextureCoords = 32;
  p_Resource.maxVertexAttribs = 64;
  p_Resource.maxVertexUniformComponents = 4096;
  p_Resource.maxVaryingFloats = 64;
  p_Resource.maxVertexTextureImageUnits = 32;
  p_Resource.maxCombinedTextureImageUnits = 80;
  p_Resource.maxTextureImageUnits = 32;
  p_Resource.maxFragmentUniformComponents = 4096;
  p_Resource.maxDrawBuffers = 32;
  p_Resource.maxVertexUniformVectors = 128;
  p_Resource.maxVaryingVectors = 8;
  p_Resource.maxFragmentUniformVectors = 16;
  p_Resource.maxVertexOutputVectors = 16;
  p_Resource.maxFragmentInputVectors = 15;
  p_Resource.minProgramTexelOffset = -8;
  p_Resource.maxProgramTexelOffset = 7;
  p_Resource.maxClipDistances = 8;
  p_Resource.maxComputeWorkGroupCountX = 65535;
  p_Resource.maxComputeWorkGroupCountY = 65535;
  p_Resource.maxComputeWorkGroupCountZ = 65535;
  p_Resource.maxComputeWorkGroupSizeX = 1024;
  p_Resource.maxComputeWorkGroupSizeY = 1024;
  p_Resource.maxComputeWorkGroupSizeZ = 64;
  p_Resource.maxComputeUniformComponents = 1024;
  p_Resource.maxComputeTextureImageUnits = 16;
  p_Resource.maxComputeImageUniforms = 8;
  p_Resource.maxComputeAtomicCounters = 8;
  p_Resource.maxComputeAtomicCounterBuffers = 1;
  p_Resource.maxVaryingComponents = 60;
  p_Resource.maxVertexOutputComponents = 64;
  p_Resource.maxGeometryInputComponents = 64;
  p_Resource.maxGeometryOutputComponents = 128;
  p_Resource.maxFragmentInputComponents = 128;
  p_Resource.maxImageUnits = 8;
  p_Resource.maxCombinedImageUnitsAndFragmentOutputs = 8;
  p_Resource.maxCombinedShaderOutputResources = 8;
  p_Resource.maxImageSamples = 0;
  p_Resource.maxVertexImageUniforms = 0;
  p_Resource.maxTessControlImageUniforms = 0;
  p_Resource.maxTessEvaluationImageUniforms = 0;
  p_Resource.maxGeometryImageUniforms = 0;
  p_Resource.maxFragmentImageUniforms = 8;
  p_Resource.maxCombinedImageUniforms = 8;
  p_Resource.maxGeometryTextureImageUnits = 16;
  p_Resource.maxGeometryOutputVertices = 256;
  p_Resource.maxGeometryTotalOutputComponents = 1024;
  p_Resource.maxGeometryUniformComponents = 1024;
  p_Resource.maxGeometryVaryingComponents = 64;
  p_Resource.maxTessControlInputComponents = 128;
  p_Resource.maxTessControlOutputComponents = 128;
  p_Resource.maxTessControlTextureImageUnits = 16;
  p_Resource.maxTessControlUniformComponents = 1024;
  p_Resource.maxTessControlTotalOutputComponents = 4096;
  p_Resource.maxTessEvaluationInputComponents = 128;
  p_Resource.maxTessEvaluationOutputComponents = 128;
  p_Resource.maxTessEvaluationTextureImageUnits = 16;
  p_Resource.maxTessEvaluationUniformComponents = 1024;
  p_Resource.maxTessPatchComponents = 120;
  p_Resource.maxPatchVertices = 32;
  p_Resource.maxTessGenLevel = 64;
  p_Resource.maxViewports = 16;
  p_Resource.maxVertexAtomicCounters = 0;
  p_Resource.maxTessControlAtomicCounters = 0;
  p_Resource.maxTessEvaluationAtomicCounters = 0;
  p_Resource.maxGeometryAtomicCounters = 0;
  p_Resource.maxFragmentAtomicCounters = 8;
  p_Resource.maxCombinedAtomicCounters = 8;
  p_Resource.maxAtomicCounterBindings = 1;
  p_Resource.maxVertexAtomicCounterBuffers = 0;
  p_Resource.maxTessControlAtomicCounterBuffers = 0;
  p_Resource.maxTessEvaluationAtomicCounterBuffers = 0;
  p_Resource.maxGeometryAtomicCounterBuffers = 0;
  p_Resource.maxFragmentAtomicCounterBuffers = 1;
  p_Resource.maxCombinedAtomicCounterBuffers = 1;
  p_Resource.maxAtomicCounterBufferSize = 16384;
  p_Resource.maxTransformFeedbackBuffers = 4;
  p_Resource.maxTransformFeedbackInterleavedComponents = 64;
  p_Resource.maxCullDistances = 8;
  p_Resource.maxCombinedClipAndCullDistances = 8;
  p_Resource.maxSamples = 4;
  p_Resource.limits.nonInductiveForLoops = 1;
  p_Resource.limits.whileLoops = 1;
  p_Resource.limits.doWhileLoops = 1;
  p_Resource.limits.generalUniformIndexing = 1;
  p_Resource.limits.generalAttributeMatrixVectorIndexing = 1;
  p_Resource.limits.generalVaryingIndexing = 1;
  p_Resource.limits.generalSamplerIndexing = 1;
  p_Resource.limits.generalVariableIndexing = 1;
  p_Resource.limits.generalConstantMatrixVectorIndexing = 1;
}

// <-

_INTR_INLINE VkShaderStageFlagBits
mapGpuProgramTypeToVkShaderStage(GpuProgramType::Enum p_Type)
{
  switch (p_Type)
  {
  case GpuProgramType::kVertex:
    return VK_SHADER_STAGE_VERTEX_BIT;
  case GpuProgramType::kFragment:
    return VK_SHADER_STAGE_FRAGMENT_BIT;
  case GpuProgramType::kGeometry:
    return VK_SHADER_STAGE_GEOMETRY_BIT;
  case GpuProgramType::kCompute:
    return VK_SHADER_STAGE_COMPUTE_BIT;
  }

  _INTR_ASSERT(false && "Failed to map GPU program type");
  return VK_SHADER_STAGE_VERTEX_BIT;
}

// <-

_INTR_INLINE EShLanguage mapGpuProgramTypeToEshLang(GpuProgramType::Enum p_Type)
{
  switch (p_Type)
  {
  case GpuProgramType::kVertex:
    return EShLangVertex;
  case GpuProgramType::kFragment:
    return EShLangFragment;
  case GpuProgramType::kGeometry:
    return EShLangGeometry;
  case GpuProgramType::kCompute:
    return EShLangCompute;
  }

  _INTR_ASSERT(false && "Failed to map GPU program type");
  return EShLangVertex;
}

// <-

_INTR_INLINE VkBufferUsageFlagBits
mapBufferTypeToVkUsageFlagBits(BufferType::Enum p_BufferType)
{
  switch (p_BufferType)
  {
  case BufferType::kVertex:
    return VK_BUFFER_USAGE_VERTEX_BUFFER_BIT;
  case BufferType::kIndex32:
  case BufferType::kIndex16:
    return VK_BUFFER_USAGE_INDEX_BUFFER_BIT;
  case BufferType::kUniform:
    return VK_BUFFER_USAGE_UNIFORM_BUFFER_BIT;
  case BufferType::kStorage:
    return VK_BUFFER_USAGE_STORAGE_BUFFER_BIT;
  }

  _INTR_ASSERT(false && "Failed to map buffer type");
  return VK_BUFFER_USAGE_VERTEX_BUFFER_BIT;
}

// <-

_INTR_INLINE VkDescriptorType
mapBindingTypeToVkDescriptorType(BindingType::Enum p_BindingType)
{
  switch (p_BindingType)
  {
  case BindingType::kUniformBuffer:
    return VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER;
  case BindingType::kUniformBufferDynamic:
    return VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER_DYNAMIC;
  case BindingType::kImageAndSamplerCombined:
    return VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER;
  case BindingType::kSampledImage:
    return VK_DESCRIPTOR_TYPE_SAMPLED_IMAGE;
  case BindingType::kSampler:
    return VK_DESCRIPTOR_TYPE_SAMPLER;
  case BindingType::kStorageBuffer:
    return VK_DESCRIPTOR_TYPE_STORAGE_BUFFER;
  case BindingType::kStorageImage:
    return VK_DESCRIPTOR_TYPE_STORAGE_IMAGE;
  }

  _INTR_ASSERT(false && "Failed to map binding type");
  return VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER;
}

// <-

_INTR_INLINE VkFormat mapFormatToVkFormat(Format::Enum p_Format)
{
  switch (p_Format)
  {
  case Format::kR32G32B32SFloat:
    return VK_FORMAT_R32G32B32_SFLOAT;
  case Format::kR32G32B32A32SFloat:
    return VK_FORMAT_R32G32B32A32_SFLOAT;
  case Format::kR32G32SFloat:
    return VK_FORMAT_R32G32_SFLOAT;
  case Format::kR16G16Float:
    return VK_FORMAT_R16G16_SFLOAT;
  case Format::kR16G16B16Float:
    return VK_FORMAT_R16G16B16_SFLOAT;
  case Format::kR16G16B16A16Float:
    return VK_FORMAT_R16G16B16A16_SFLOAT;
  case Format::kR32SFloat:
    return VK_FORMAT_R32_SFLOAT;
  case Format::kR32UInt:
    return VK_FORMAT_R32_UINT;

  case Format::kD24UnormS8UInt:
    return VK_FORMAT_D24_UNORM_S8_UINT;

  case Format::kB8G8R8A8UNorm:
    return VK_FORMAT_B8G8R8A8_UNORM;
  case Format::kB8G8R8A8Srgb:
    return VK_FORMAT_B8G8R8A8_SRGB;

  case Format::kBC1RGBUNorm:
    return VK_FORMAT_BC1_RGB_UNORM_BLOCK;
  case Format::kBC1RGBSrgb:
    return VK_FORMAT_BC1_RGB_SRGB_BLOCK;
  case Format::kBC2UNorm:
    return VK_FORMAT_BC2_UNORM_BLOCK;
  case Format::kBC2Srgb:
    return VK_FORMAT_BC2_SRGB_BLOCK;
  case Format::kBC3UNorm:
    return VK_FORMAT_BC3_UNORM_BLOCK;
  case Format::kBC3Srgb:
    return VK_FORMAT_BC3_SRGB_BLOCK;
  case Format::kBC5UNorm:
    return VK_FORMAT_BC5_UNORM_BLOCK;
  case Format::kBC5SNorm:
    return VK_FORMAT_BC5_SNORM_BLOCK;
  case Format::kBC6UFloat:
    return VK_FORMAT_BC6H_UFLOAT_BLOCK;
  }

  _INTR_ASSERT(false && "Failed to map format");
  return VK_FORMAT_R32G32B32_SFLOAT;
};

// <-

_INTR_INLINE bool isFormatDepthStencilFormat(Format::Enum p_Format)
{
  switch (p_Format)
  {
  case Format::kD24UnormS8UInt:
    return true;
  }

  return false;
};

// <-

_INTR_INLINE void createDefaultMeshVertexLayout(Dod::Ref& p_VertexLayoutToInit)
{
  // Position
  VertexBinding bindPos = {};
  {
    bindPos.binding = 0u;
    bindPos.stride = 6u;
  }

  VertexAttribute attrPos = {};
  {
    attrPos.binding = 0u;
    attrPos.format = Format::kR16G16B16Float;
    attrPos.location = 0u;
    attrPos.offset = 0u;
  }

  // UV0
  VertexBinding bindUv0 = {};
  {
    bindUv0.binding = 1u;
    bindUv0.stride = 4u;
  }

  VertexAttribute attrUv0 = {};
  {
    attrUv0.binding = 1u;
    attrUv0.format = Format::kR16G16Float;
    attrUv0.location = 1u;
    attrUv0.offset = 0u;
  }

  // Normal
  VertexBinding bindNormal = {};
  {
    bindNormal.binding = 2u;
    bindNormal.stride = 6u;
  }

  VertexAttribute attrNormal = {};
  {
    attrNormal.binding = 2u;
    attrNormal.format = Format::kR16G16B16Float;
    attrNormal.location = 2u;
    attrNormal.offset = 0u;
  }

  // Tangent
  VertexBinding bindTangent = {};
  {
    bindTangent.binding = 3u;
    bindTangent.stride = 6u;
  }

  VertexAttribute attrTangent = {};
  {
    attrTangent.binding = 3u;
    attrTangent.format = Format::kR16G16B16Float;
    attrTangent.location = 3u;
    attrTangent.offset = 0u;
  }

  // Binormal
  VertexBinding bindBinormal = {};
  {
    bindBinormal.binding = 4u;
    bindBinormal.stride = 6u;
  }

  VertexAttribute attrBinormal = {};
  {
    attrBinormal.binding = 4u;
    attrBinormal.format = Format::kR16G16B16Float;
    attrBinormal.location = 4u;
    attrBinormal.offset = 0u;
  }

  // VertexColor
  VertexBinding bindVtxColor = {};
  {
    bindVtxColor.binding = 5u;
    bindVtxColor.stride = 4u;
  }

  VertexAttribute attrVtxColor = {};
  {
    attrVtxColor.binding = 5u;
    attrVtxColor.format = Format::kB8G8R8A8UNorm;
    attrVtxColor.location = 5u;
    attrVtxColor.offset = 0u;
  }

  Resources::VertexLayoutManager::_descVertexBindings(p_VertexLayoutToInit)
      .push_back(bindPos);
  Resources::VertexLayoutManager::_descVertexBindings(p_VertexLayoutToInit)
      .push_back(bindUv0);
  Resources::VertexLayoutManager::_descVertexBindings(p_VertexLayoutToInit)
      .push_back(bindNormal);
  Resources::VertexLayoutManager::_descVertexBindings(p_VertexLayoutToInit)
      .push_back(bindTangent);
  Resources::VertexLayoutManager::_descVertexBindings(p_VertexLayoutToInit)
      .push_back(bindBinormal);
  Resources::VertexLayoutManager::_descVertexBindings(p_VertexLayoutToInit)
      .push_back(bindVtxColor);

  Resources::VertexLayoutManager::_descVertexAttributes(p_VertexLayoutToInit)
      .push_back(attrPos);
  Resources::VertexLayoutManager::_descVertexAttributes(p_VertexLayoutToInit)
      .push_back(attrUv0);
  Resources::VertexLayoutManager::_descVertexAttributes(p_VertexLayoutToInit)
      .push_back(attrNormal);
  Resources::VertexLayoutManager::_descVertexAttributes(p_VertexLayoutToInit)
      .push_back(attrBinormal);
  Resources::VertexLayoutManager::_descVertexAttributes(p_VertexLayoutToInit)
      .push_back(attrTangent);
  Resources::VertexLayoutManager::_descVertexAttributes(p_VertexLayoutToInit)
      .push_back(attrVtxColor);
}

// <-

_INTR_INLINE void createDebugLineVertexLayout(Dod::Ref& p_VertexLayoutToInit)
{
  VertexBinding bind = {};
  {
    bind.binding = 0u;
    bind.stride = 16u;
  }

  // Position
  VertexAttribute attrPos = {};
  {
    attrPos.binding = 0u;
    attrPos.format = Format::kR32G32B32SFloat;
    attrPos.location = 0u;
    attrPos.offset = 0u;
  }

  // VertexColor
  VertexAttribute attrVtxColor = {};
  {
    attrVtxColor.binding = 0u;
    attrVtxColor.format = Format::kB8G8R8A8UNorm;
    attrVtxColor.location = 1u;
    attrVtxColor.offset = 12u;
  }

  Resources::VertexLayoutManager::_descVertexBindings(p_VertexLayoutToInit)
      .push_back(bind);

  Resources::VertexLayoutManager::_descVertexAttributes(p_VertexLayoutToInit)
      .push_back(attrPos);
  Resources::VertexLayoutManager::_descVertexAttributes(p_VertexLayoutToInit)
      .push_back(attrVtxColor);
}

// <-

_INTR_INLINE static void updateAccessMask(VkAccessFlags& p_AccessFlags,
                                          VkImageLayout p_ImageLayout)
{
  if (p_ImageLayout == VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL)
  {
    p_AccessFlags = VK_ACCESS_COLOR_ATTACHMENT_WRITE_BIT;
  }
  else if (p_ImageLayout == VK_IMAGE_LAYOUT_DEPTH_STENCIL_ATTACHMENT_OPTIMAL)
  {
    p_AccessFlags = VK_ACCESS_DEPTH_STENCIL_ATTACHMENT_WRITE_BIT;
  }

  else if (p_ImageLayout == VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL)
  {
    p_AccessFlags = VK_ACCESS_TRANSFER_WRITE_BIT;
  }
  else if (p_ImageLayout == VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL)
  {
    p_AccessFlags = VK_ACCESS_TRANSFER_READ_BIT;
  }

  else if (p_ImageLayout == VK_IMAGE_LAYOUT_GENERAL)
  {
    p_AccessFlags = VK_ACCESS_SHADER_READ_BIT | VK_ACCESS_SHADER_WRITE_BIT;
  }
  else if (p_ImageLayout == VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL)
  {
    p_AccessFlags = VK_ACCESS_SHADER_READ_BIT;
  }
}

// <-

_INTR_INLINE static void insertImageMemoryBarrier(
    VkCommandBuffer p_CommandBuffer, VkImage p_Image,
    VkImageLayout p_OldImageLayout, VkImageLayout p_NewImageLayout,
    VkImageSubresourceRange p_SubresourceRange,
    VkPipelineStageFlags p_SrcStages = VK_PIPELINE_STAGE_TOP_OF_PIPE_BIT,
    VkPipelineStageFlags p_DestStages = VK_PIPELINE_STAGE_TOP_OF_PIPE_BIT)
{
  _INTR_ASSERT(p_CommandBuffer != nullptr);

  VkImageMemoryBarrier imageMemoryBarrier = {};
  {
    imageMemoryBarrier.sType = VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER;
    imageMemoryBarrier.pNext = nullptr;
    updateAccessMask(imageMemoryBarrier.srcAccessMask, p_OldImageLayout);
    updateAccessMask(imageMemoryBarrier.dstAccessMask, p_NewImageLayout);
    imageMemoryBarrier.oldLayout = p_OldImageLayout;
    imageMemoryBarrier.newLayout = p_NewImageLayout;
    imageMemoryBarrier.srcQueueFamilyIndex = VK_QUEUE_FAMILY_IGNORED;
    imageMemoryBarrier.dstQueueFamilyIndex = VK_QUEUE_FAMILY_IGNORED;
    imageMemoryBarrier.image = p_Image;
    imageMemoryBarrier.subresourceRange = p_SubresourceRange;
  }

  vkCmdPipelineBarrier(p_CommandBuffer, p_SrcStages, p_DestStages, 0u, 0u,
                       nullptr, 0u, nullptr, 1u, &imageMemoryBarrier);
}

// <-

_INTR_INLINE static void insertImageMemoryBarrier(
    VkCommandBuffer p_CommandBuffer, VkImage p_Image,
    VkImageAspectFlags p_AspectMask, VkImageLayout p_OldImageLayout,
    VkImageLayout p_NewImageLayout,
    VkPipelineStageFlags p_SrcStages = VK_PIPELINE_STAGE_TOP_OF_PIPE_BIT,
    VkPipelineStageFlags p_DstStages = VK_PIPELINE_STAGE_TOP_OF_PIPE_BIT)
{
  VkImageSubresourceRange range;
  range.aspectMask = p_AspectMask;
  range.baseMipLevel = 0u;
  range.levelCount = 1u;
  range.baseArrayLayer = 0u;
  range.layerCount = 1u;

  insertImageMemoryBarrier(p_CommandBuffer, p_Image, p_OldImageLayout,
                           p_NewImageLayout, range, p_SrcStages, p_DstStages);
}

_INTR_INLINE static void insertBufferMemoryBarrier(
    VkCommandBuffer p_CommandBuffer, VkBuffer p_Buffer, uint32_t p_SizeInBytes,
    uint32_t p_OffsetInBytes, VkAccessFlags p_SrcAccessMask,
    VkAccessFlags p_DstAccessMask,
    VkPipelineStageFlags p_SrcStages = VK_PIPELINE_STAGE_TOP_OF_PIPE_BIT,
    VkPipelineStageFlags p_DstStages = VK_PIPELINE_STAGE_TOP_OF_PIPE_BIT)
{
  VkBufferMemoryBarrier bufferMemoryBarrier = {};
  {
    bufferMemoryBarrier.sType = VK_STRUCTURE_TYPE_BUFFER_MEMORY_BARRIER;
    bufferMemoryBarrier.pNext = nullptr;
    bufferMemoryBarrier.srcQueueFamilyIndex = VK_QUEUE_FAMILY_IGNORED;
    bufferMemoryBarrier.dstQueueFamilyIndex = VK_QUEUE_FAMILY_IGNORED;
    bufferMemoryBarrier.buffer = p_Buffer;
    bufferMemoryBarrier.offset = p_OffsetInBytes;
    bufferMemoryBarrier.size = p_SizeInBytes;
    bufferMemoryBarrier.srcAccessMask = p_SrcAccessMask;
    bufferMemoryBarrier.dstAccessMask = p_DstAccessMask;
  }

  vkCmdPipelineBarrier(p_CommandBuffer, p_SrcStages, p_DstStages, 0u, 0u,
                       nullptr, 1u, &bufferMemoryBarrier, 0u, nullptr);
}

// <-

_INTR_INLINE static uint32_t computeGpuMemoryTypeIdx(uint32_t p_TypeBits,
                                                     VkFlags p_RequirementsMask)
{
  uint32_t memoryTypeIndex = (uint32_t)-1;

  for (uint32_t i = 0;
       i < RenderSystem::_vkPhysicalDeviceMemoryProperties.memoryTypeCount; ++i)
  {
    const uint32_t typeIndexMask = 1u << i;

    if ((p_TypeBits & typeIndexMask) == typeIndexMask)
    {
      if ((RenderSystem::_vkPhysicalDeviceMemoryProperties.memoryTypes[i]
               .propertyFlags &
           p_RequirementsMask) == p_RequirementsMask)
      {
        return i;
      }
    }
  }

  _INTR_ASSERT(false);
  return (uint32_t)-1;
}
};
}
}
}