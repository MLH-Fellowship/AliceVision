// This file is part of the AliceVision project.
// Copyright (c) 2016 AliceVision contributors.
// Copyright (c) 2012 openMVG contributors.
// This Source Code Form is subject to the terms of the Mozilla Public License,
// v. 2.0. If a copy of the MPL was not distributed with this file,
// You can obtain one at https://mozilla.org/MPL/2.0/.

#pragma once

#include "aliceVision/matching/ArrayMatcher.hpp"
#include "aliceVision/matching/CascadeHasher.hpp"
#include "aliceVision/matching/IndMatch.hpp"

#include <aliceVision/system/Logger.hpp>

// inlcude openCV imports here

#include <memory>
#include <random>
#include <cmath>

using namespace std;

namespace aliceVision
{
namespace matching
{

//------------------
//-- Bibliography --
//------------------

// fix to have appropriate template
template <typename Scalar = float, typename Metric = L2_Simple<Scalar>>
class ArrayMatcher_hnswlib : public ArrayMatcher<Scalar, Metric>
{
public:
    typedef typename Metric::ResultType DistanceType;

    // Some initialization
    // initialize openCV shit here
    // ArrayMatcher_hnswlib() {}
    // virtual ~ArrayMatcher_hnswlib() {}

    /**
     * Build the matching structure
     *
     * \param[in] dataset   Input data.
     * \param[in] nbRows    The number of component.
     * \param[in] dimension Length of the data contained in the dataset.
     *
     * \return True if success.
     */
    bool Build(const Scalar* dataset, int nbRows, int dimension)
    {

    };

    /**
     * Search the nearest Neighbor of the scalar array query.
     *
     * \param[in]   query     The query array
     * \param[out]  indice    The indice of array in the dataset that
     *  have been computed as the nearest array.
     * \param[out]  distance  The distance between the two arrays.
     *
     * \return True if success.
     */
    bool SearchNeighbour(const Scalar* query, int* indice, DistanceType* distance)
    {
        ALICEVISION_LOG_WARNING("This matcher is not made to match a single query");
        return false;
    }

    /**
     * Search the N nearest Neighbor of the scalar array query.
     *
     * \param[in]   query     The query array
     * \param[in]   nbQuery   The number of query rows
     * \param[out]  indices   The corresponding (query, neighbor) indices
     * \param[out]  distances  The distances between the matched arrays.
     * \param[out]  NN        The number of maximal neighbor that will be searched.
     *
     * \return True if success.
     */
    bool SearchNeighbours(const Scalar* query, int nbQuery, IndMatches* pvec_indices,
                          std::vector<DistanceType>* pvec_distances, size_t NN)
    {

    };

private:

};

} // namespace matching
} // namespace aliceVision
