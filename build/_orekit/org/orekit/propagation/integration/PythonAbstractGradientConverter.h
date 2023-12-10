#ifndef org_orekit_propagation_integration_PythonAbstractGradientConverter_H
#define org_orekit_propagation_integration_PythonAbstractGradientConverter_H

#include "org/orekit/propagation/integration/AbstractGradientConverter.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class FieldVector3D;
          class FieldRotation;
        }
      }
    }
    namespace analysis {
      namespace differentiation {
        class Gradient;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {
      namespace integration {

        class PythonAbstractGradientConverter : public ::org::orekit::propagation::integration::AbstractGradientConverter {
         public:
          enum {
            mid_init$_99803b0791f320ff,
            mid_extend_b582dc064d70ed6d,
            mid_extend_a54ef65bb7e1aa32,
            mid_extend_7b4bd5ccbcf5cc53,
            mid_getFreeStateParameters_570ce0828f81a2c1,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PythonAbstractGradientConverter(jobject obj) : ::org::orekit::propagation::integration::AbstractGradientConverter(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PythonAbstractGradientConverter(const PythonAbstractGradientConverter& obj) : ::org::orekit::propagation::integration::AbstractGradientConverter(obj) {}

          PythonAbstractGradientConverter(jint);

          ::org::hipparchus::analysis::differentiation::Gradient extend(const ::org::hipparchus::analysis::differentiation::Gradient &, jint) const;
          ::org::hipparchus::geometry::euclidean::threed::FieldRotation extend(const ::org::hipparchus::geometry::euclidean::threed::FieldRotation &, jint) const;
          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D extend(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &, jint) const;
          jint getFreeStateParameters() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace propagation {
      namespace integration {
        extern PyType_Def PY_TYPE_DEF(PythonAbstractGradientConverter);
        extern PyTypeObject *PY_TYPE(PythonAbstractGradientConverter);

        class t_PythonAbstractGradientConverter {
        public:
          PyObject_HEAD
          PythonAbstractGradientConverter object;
          static PyObject *wrap_Object(const PythonAbstractGradientConverter&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
