// Generated by using torchexport::export() -> do not edit by hand
#include "exports.h"
#define TORCHVISIONLIB_HEADERS_ONLY
#include <torchvisionlib/torchvisionlib.h>

// [[Rcpp::export]]
torch::Tensor rcpp_vision_ops_nms (torch::Tensor dets, torch::Tensor scores, double iou_threshold) {
  return  vision_ops_nms(dets.get(), scores.get(), iou_threshold);
}
// [[Rcpp::export]]
torch::Tensor rcpp_vision_ops_deform_conv2d (torch::Tensor input, torch::Tensor weight, torch::Tensor offset, torch::Tensor mask, torch::Tensor bias, std::int64_t stride_h, std::int64_t stride_w, std::int64_t pad_h, std::int64_t pad_w, std::int64_t dilation_h, std::int64_t dilation_w, std::int64_t groups, std::int64_t offset_groups, bool use_mask) {
  return  vision_ops_deform_conv2d(input.get(), weight.get(), offset.get(), mask.get(), bias.get(), stride_h, stride_w, pad_h, pad_w, dilation_h, dilation_w, groups, offset_groups, use_mask);
}
// [[Rcpp::export]]
torchvisionlib::tensor_pair rcpp_vision_ops_ps_roi_align (torch::Tensor input, torch::Tensor rois, double spatial_scale, int64_t pooled_height, int64_t pooled_width, int64_t sampling_ratio) {
  return  vision_ops_ps_roi_align(input.get(), rois.get(), spatial_scale, pooled_height, pooled_width, sampling_ratio);
}
// [[Rcpp::export]]
torchvisionlib::tensor_pair rcpp_vision_ops_ps_roi_pool (torch::Tensor input, torch::Tensor rois, double spatial_scale, int64_t pooled_height, int64_t pooled_width) {
  return  vision_ops_ps_roi_pool(input.get(), rois.get(), spatial_scale, pooled_height, pooled_width);
}
// [[Rcpp::export]]
torch::Tensor rcpp_vision_ops_roi_align (torch::Tensor input, torch::Tensor rois, double spatial_scale, int64_t pooled_height, int64_t pooled_width, int64_t sampling_ratio, bool aligned) {
  return  vision_ops_roi_align(input.get(), rois.get(), spatial_scale, pooled_height, pooled_width, sampling_ratio, aligned);
}
// [[Rcpp::export]]
torchvisionlib::tensor_pair rcpp_vision_ops_roi_pool (torch::Tensor input, torch::Tensor rois, double spatial_scale, int64_t pooled_height, int64_t pooled_width) {
  return  vision_ops_roi_pool(input.get(), rois.get(), spatial_scale, pooled_height, pooled_width);
}
// [[Rcpp::export]]
torch::Tensor rcpp_vision_read_jpeg (torch::string fpath) {
  return  vision_read_jpeg(fpath.get());
}
// [[Rcpp::export]]
torch::Tensor rcpp_vision_read_jpeg_float (torch::string fpath) {
  return  vision_read_jpeg_float(fpath.get());
}
// [[Rcpp::export]]
void rcpp_delete_tensor_pair (void* x) {
   delete_tensor_pair(x);
}
// [[Rcpp::export]]
torch::Tensor rcpp_tensor_pair_get_first (torchvisionlib::tensor_pair x) {
  return  tensor_pair_get_first(x.get());
}
// [[Rcpp::export]]
torch::Tensor rcpp_tensor_pair_get_second (torchvisionlib::tensor_pair x) {
  return  tensor_pair_get_second(x.get());
}
