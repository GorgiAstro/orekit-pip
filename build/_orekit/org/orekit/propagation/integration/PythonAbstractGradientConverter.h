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
            mid_init$_44ed599e93e8a30c,
            mid_extend_40f2f08546258c9b,
            mid_extend_3facea1cbc778867,
            mid_extend_9b74b13fc2b0b45d,
            mid_getFreeStateParameters_55546ef6a647f39b,
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
