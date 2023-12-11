#ifndef org_orekit_estimation_measurements_modifiers_OnBoardAntennaOneWayGNSSPhaseModifier_H
#define org_orekit_estimation_measurements_modifiers_OnBoardAntennaOneWayGNSSPhaseModifier_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {
          class OneWayGNSSPhase;
        }
        class EstimatedMeasurementBase;
        class EstimationModifier;
      }
    }
    namespace utils {
      class ParameterDriver;
    }
    namespace attitudes {
      class AttitudeProvider;
    }
  }
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class Vector3D;
        }
      }
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

          class OnBoardAntennaOneWayGNSSPhaseModifier : public ::java::lang::Object {
           public:
            enum {
              mid_init$_b0d111dc230cd433,
              mid_getParametersDrivers_0d9551367f7ecdef,
              mid_modifyWithoutDerivatives_e471490df8741b73,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit OnBoardAntennaOneWayGNSSPhaseModifier(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            OnBoardAntennaOneWayGNSSPhaseModifier(const OnBoardAntennaOneWayGNSSPhaseModifier& obj) : ::java::lang::Object(obj) {}

            OnBoardAntennaOneWayGNSSPhaseModifier(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::orekit::attitudes::AttitudeProvider &);

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
          extern PyType_Def PY_TYPE_DEF(OnBoardAntennaOneWayGNSSPhaseModifier);
          extern PyTypeObject *PY_TYPE(OnBoardAntennaOneWayGNSSPhaseModifier);

          class t_OnBoardAntennaOneWayGNSSPhaseModifier {
          public:
            PyObject_HEAD
            OnBoardAntennaOneWayGNSSPhaseModifier object;
            static PyObject *wrap_Object(const OnBoardAntennaOneWayGNSSPhaseModifier&);
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
