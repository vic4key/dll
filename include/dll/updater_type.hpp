//=======================================================================
// Copyright (c) 2014-2017 Baptiste Wicht
// Distributed under the terms of the MIT License.
// (See accompanying file LICENSE or copy at
//  http://opensource.org/licenses/MIT)
//=======================================================================

#pragma once

namespace dll {

/*!
 * \brief The updater type for gradient descent
 */
enum class updater_type {
    SGD,      ///< The basic updater for SGD
    MOMENTUM, ///< Use momentum for SGD
    ADAGRAD,  ///< Use ADAGRAD for SGD
    RMSPROP,  ///< Use RMSPROP for SGD
    ADAM      ///< Use RMSPROP for SGD
};

/*!
 * \brief Returns a string representation of an updater type
 * \param f The updater type to transform to string
 * \return a string representation of an updater type
 */
inline std::string to_string(updater_type f) {
    switch (f) {
        case updater_type::SGD:
            return "SGD";
        case updater_type::MOMENTUM:
            return "MOMENTUM";
        case updater_type::ADAGRAD:
            return "ADAGRAD";
        case updater_type::RMSPROP:
            return "RMSPROP";
        case updater_type::ADAM:
            return "ADAM";
    }

    cpp_unreachable("Unreachable code");

    return "UNDEFINED";
}

} //end of dll namespace
