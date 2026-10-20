// Copyright (C) 2025-2026 The Simons Foundation, Inc. and the TP-FGT authors (see NOTICE)
// Authors: Dhairya Malhotra, Shidong Jiang, Leslie Greengard
// SPDX-License-Identifier: Apache-2.0

#include "fgt.hpp"

int main() {
  // Read ndim, nx
  int ndim, nx;
  std::cout << "enter ndim, nx\n";
  std::cin >> ndim >> nx;
  std::cout << "ndim= " << ndim << ", nx= " << nx << "\n";

  int ny = nx/2;
  int nz = nx/2;
  FGT<double,4>::test(ndim, nx, ny, nz);

  return 0;
}
