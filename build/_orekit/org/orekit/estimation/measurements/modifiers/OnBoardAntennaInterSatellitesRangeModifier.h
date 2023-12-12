#ifndef org_orekit_estimation_measurements_modifiers_OnBoardAntennaInterSatellitesRangeModifier_H
#define org_orekit_estimation_measurements_modifiers_OnBoardAntennaInterSatellitesRangeModifier_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace utils {
      class ParameterDriver;
    }
    namespace estimation {
      namespace measurements {
        class EstimatedMeasurementBase;
        class InterSatellitesRange;
        class EstimationModifier;
      }
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
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          class OnBoardAntennaInterSatellitesRangeModifier : public ::java::lang::Object {
           public:
            enum {
              mid_init$_be9548a8a583a03d,
              mid_getParametersDrivers_0d9551367f7ecdef,
              mid_modifyWithoutDerivatives_e471490df8741b73,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit OnBoardAntennaInterSatellitesRangeModifier(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            OnBoardAntennaInterSatellitesRangeModifier(const OnBoardAntennaInterSatellitesRangeModifier& obj) : ::java::lang::Object(obj) {}

            OnBoardAntennaInterSatellitesRangeModifier(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &);

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
          extern PyType_Def PY_TYPE_DEF(OnBoardAntennaInterSatellitesRangeModifier);
          extern PyTypeObject *PY_TYPE(OnBoardAntennaInterSatellitesRangeModifier);

          class t_OnBoardAntennaInterSatellitesRangeModifier {
          public:
            PyObject_HEAD
            OnBoardAntennaInterSatellitesRangeModifier object;
            static PyObject *wrap_Object(const OnBoardAntennaInterSatellitesRangeModifier&);
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
