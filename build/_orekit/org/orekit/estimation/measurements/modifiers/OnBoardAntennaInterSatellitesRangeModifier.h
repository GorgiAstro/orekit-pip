#ifndef org_orekit_estimation_measurements_modifiers_OnBoardAntennaInterSatellitesRangeModifier_H
#define org_orekit_estimation_measurements_modifiers_OnBoardAntennaInterSatellitesRangeModifier_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        class EstimatedMeasurementBase;
        class InterSatellitesRange;
        class EstimationModifier;
      }
    }
    namespace utils {
      class ParameterDriver;
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

          class OnBoardAntennaInterSatellitesRangeModifier : public ::java::lang::Object {
           public:
            enum {
              mid_init$_c8e9682f0daaca68,
              mid_getParametersDrivers_d751c1a57012b438,
              mid_modifyWithoutDerivatives_ecce216dce506020,
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
