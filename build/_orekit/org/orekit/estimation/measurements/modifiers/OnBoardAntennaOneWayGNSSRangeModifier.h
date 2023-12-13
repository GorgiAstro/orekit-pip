#ifndef org_orekit_estimation_measurements_modifiers_OnBoardAntennaOneWayGNSSRangeModifier_H
#define org_orekit_estimation_measurements_modifiers_OnBoardAntennaOneWayGNSSRangeModifier_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class Vector3D;
        }
      }
    }
  }
  namespace orekit {
    namespace attitudes {
      class AttitudeProvider;
    }
    namespace estimation {
      namespace measurements {
        class EstimationModifier;
        class EstimatedMeasurementBase;
        namespace gnss {
          class OneWayGNSSRange;
        }
      }
    }
    namespace utils {
      class ParameterDriver;
    }
  }
}
namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          class OnBoardAntennaOneWayGNSSRangeModifier : public ::java::lang::Object {
           public:
            enum {
              mid_init$_a3f6e98498ad57a5,
              mid_getParametersDrivers_e62d3bb06d56d7e3,
              mid_modifyWithoutDerivatives_308087fabc1d7f66,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit OnBoardAntennaOneWayGNSSRangeModifier(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            OnBoardAntennaOneWayGNSSRangeModifier(const OnBoardAntennaOneWayGNSSRangeModifier& obj) : ::java::lang::Object(obj) {}

            OnBoardAntennaOneWayGNSSRangeModifier(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::orekit::attitudes::AttitudeProvider &);

            ::java::util::List getParametersDrivers() const;
            void modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase &) const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {
          extern PyType_Def PY_TYPE_DEF(OnBoardAntennaOneWayGNSSRangeModifier);
          extern PyTypeObject *PY_TYPE(OnBoardAntennaOneWayGNSSRangeModifier);

          class t_OnBoardAntennaOneWayGNSSRangeModifier {
          public:
            PyObject_HEAD
            OnBoardAntennaOneWayGNSSRangeModifier object;
            static PyObject *wrap_Object(const OnBoardAntennaOneWayGNSSRangeModifier&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
