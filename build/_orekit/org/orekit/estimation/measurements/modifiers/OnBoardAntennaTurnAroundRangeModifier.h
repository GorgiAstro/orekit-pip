#ifndef org_orekit_estimation_measurements_modifiers_OnBoardAntennaTurnAroundRangeModifier_H
#define org_orekit_estimation_measurements_modifiers_OnBoardAntennaTurnAroundRangeModifier_H

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
    namespace estimation {
      namespace measurements {
        class EstimatedMeasurementBase;
        class TurnAroundRange;
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
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          class OnBoardAntennaTurnAroundRangeModifier : public ::java::lang::Object {
           public:
            enum {
              mid_init$_029ff0cbf68ea054,
              mid_getParametersDrivers_2afa36052df4765d,
              mid_modifyWithoutDerivatives_d1815d998cba71e9,
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
