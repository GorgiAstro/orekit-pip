#ifndef org_orekit_estimation_measurements_modifiers_OnBoardAntennaTurnAroundRangeModifier_H
#define org_orekit_estimation_measurements_modifiers_OnBoardAntennaTurnAroundRangeModifier_H

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
    namespace estimation {
      namespace measurements {
        class EstimationModifier;
        class TurnAroundRange;
        class EstimatedMeasurementBase;
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

          class OnBoardAntennaTurnAroundRangeModifier : public ::java::lang::Object {
           public:
            enum {
              mid_init$_1844f891addbac57,
              mid_getParametersDrivers_e62d3bb06d56d7e3,
              mid_modifyWithoutDerivatives_308087fabc1d7f66,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit OnBoardAntennaTurnAroundRangeModifier(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            OnBoardAntennaTurnAroundRangeModifier(const OnBoardAntennaTurnAroundRangeModifier& obj) : ::java::lang::Object(obj) {}

            OnBoardAntennaTurnAroundRangeModifier(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &);

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
          extern PyType_Def PY_TYPE_DEF(OnBoardAntennaTurnAroundRangeModifier);
          extern PyTypeObject *PY_TYPE(OnBoardAntennaTurnAroundRangeModifier);

          class t_OnBoardAntennaTurnAroundRangeModifier {
          public:
            PyObject_HEAD
            OnBoardAntennaTurnAroundRangeModifier object;
            static PyObject *wrap_Object(const OnBoardAntennaTurnAroundRangeModifier&);
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
